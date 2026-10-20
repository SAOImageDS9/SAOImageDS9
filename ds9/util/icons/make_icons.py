#!/usr/bin/env python3
"""Generate the DS9 toolbar icons in ds9/icons/ui and ds9/icons/ui_dark.

Every icon is drawn once, as SVG on a 24x24 grid, and rendered for both
the light and the dark theme with rsvg-convert.

Design rules, so new icons stay consistent with the set:
  * 24x24 canvas, keep 2px clear at the edges where possible.
  * Outline style, 2px strokes, round caps and joins.  A 2px stroke is
    centred on whole-pixel coordinates so that it renders crisply.
  * One neutral "ink" colour for the glyph, a light "tint" fill
    (the ink at low opacity) for closed shapes, and a single blue
    "accent" for the element that carries the meaning (a +/-/1 badge,
    a selection handle, the curve of a scale function...).
  * Variants of a command (zoom/bin/block/frame +, -, 1) share a base
    glyph and differ only in the accent badge.
  * Colour beyond ink/tint/accent only where colour is the point
    (prism, include/exclude).

Usage:  make_icons.py [outdir]     (default: ../../icons next to this file)
Requires rsvg-convert (librsvg).
"""

import math
import os
import subprocess
import sys

THEMES = {
    'ui': dict(ink='#30353b', tint='#30353b', tint_op=0.16,
               acc='#1e6fd9', on_acc='#ffffff', warn='#d6342c'),
    'ui_dark': dict(ink='#dfe3e8', tint='#dfe3e8', tint_op=0.16,
                    acc='#5ea4ff', on_acc='#16191d', warn='#ff6a5f'),
}

# --------------------------------------------------------------------------
# helpers.  Everything returns SVG markup with {ink} {acc} ... placeholders.

S = ('fill="none" stroke="{ink}" stroke-width="2" '
     'stroke-linecap="round" stroke-linejoin="round"')
SA = S.replace('{ink}', '{acc}')
TINT = 'fill="{tint}" fill-opacity="{tint_op}"'


def path(d, style=S, extra=''):
    return '<path d="%s" %s %s/>' % (d, style, extra)


def apath(d, extra=''):
    return path(d, SA, extra)


def fpath(d, color='{ink}', extra=''):
    return '<path d="%s" fill="%s" %s/>' % (d, color, extra)


def rect(x, y, w, h, rx=0, style=S, fill=None):
    f = '<rect x="%g" y="%g" width="%g" height="%g" rx="%g" %s/>'
    out = ''
    if fill:
        out += f % (x, y, w, h, rx, fill)
    return out + f % (x, y, w, h, rx, style)


def circle(cx, cy, r, style=S, fill=None):
    f = '<circle cx="%g" cy="%g" r="%g" %s/>'
    out = ''
    if fill:
        out += f % (cx, cy, r, fill)
    return out + f % (cx, cy, r, style)


def dot(cx, cy, r, color='{ink}'):
    return '<circle cx="%g" cy="%g" r="%g" fill="%s"/>' % (cx, cy, r, color)


def masked(body, holes):
    """Draw body with transparent knock-outs (list of svg shapes in black)."""
    masked.n += 1
    mid = 'm%d' % masked.n
    return ('<mask id="%s" maskUnits="userSpaceOnUse" x="0" y="0" '
            'width="24" height="24"><rect width="24" height="24" '
            'fill="#fff"/>%s</mask><g mask="url(#%s)">%s</g>'
            % (mid, ''.join(holes), mid, body))


masked.n = 0

# -- badge: accent disc at the lower right carrying +, -, or 1 --------------
BX, BY, BR = 17, 17, 6


def badge_hole():
    return '<circle cx="%d" cy="%d" r="%g" fill="#000"/>' % (BX, BY, BR + 1.5)


def badge(sign):
    out = dot(BX, BY, BR, '{acc}')
    st = ('fill="none" stroke="{on_acc}" stroke-width="2" '
          'stroke-linecap="round" stroke-linejoin="round"')
    if sign in '+-':
        out += path('M%d %d H%d' % (BX - 3, BY, BX + 3), st)
    if sign == '+':
        out += path('M%d %d V%d' % (BX, BY - 3, BY + 3), st)
    if sign == '1':
        out += path('M%g %g L%d %d V%d' % (BX - 1.8, BY - 1.8, BX, BY - 3,
                                           BY + 3), st)
    return out


def with_badge(glyph, sign):
    return masked(glyph, [badge_hole()]) + badge(sign)


# -- tiny 5px-high pixel font for the file-type badges ----------------------
FONT = {
    'E': ['###', '#..', '##.', '#..', '###'],
    'P': ['##.', '#.#', '##.', '#..', '#..'],
    'S': ['.##', '#..', '.#.', '..#', '##.'],
    'N': ['#..#', '##.#', '#.##', '#..#', '#..#'],
    'G': ['.###', '#...', '#.##', '#..#', '.##.'],
}


def pixel_text(txt, x, y, color):
    out = []
    for ch in txt:
        rows = FONT[ch]
        for j, row in enumerate(rows):
            for i, c in enumerate(row):
                if c == '#':
                    out.append('<rect x="%d" y="%d" width="1" height="1" '
                               'fill="%s"/>' % (x + i, y + j, color))
        x += len(rows[0]) + 1
    return ''.join(out)


def text_width(txt):
    return sum(len(FONT[c][0]) for c in txt) + len(txt) - 1


def smooth_closed(pts):
    """Catmull-Rom through pts, closed, as an SVG path."""
    n = len(pts)
    d = 'M%.2f %.2f' % pts[0]
    for i in range(n):
        p0, p1, p2, p3 = pts[i - 1], pts[i], pts[(i + 1) % n], pts[(i + 2) % n]
        c1 = (p1[0] + (p2[0] - p0[0]) / 6, p1[1] + (p2[1] - p0[1]) / 6)
        c2 = (p2[0] - (p3[0] - p1[0]) / 6, p2[1] - (p3[1] - p1[1]) / 6)
        d += ' C%.2f %.2f %.2f %.2f %.2f %.2f' % (c1 + c2 + p2)
    return d + ' Z'


# --------------------------------------------------------------------------
# shared glyphs

def magnifier(inner=''):
    return circle(10, 10, 7, fill=TINT) + path('M15 15 L21 21') + inner


def folder_open():
    return (path('M3 19 V5 H9 L11 7 H18 V10') +
            path('M3 19 L6 11 H22 L19 19 Z', extra='') +
            fpath('M3 19 L6 11 H22 L19 19 Z', '{tint}',
                  'fill-opacity="{tint_op}"'))


def document():
    return (fpath('M5 3 H14 L19 8 V21 H5 Z', '{tint}',
                  'fill-opacity="{tint_op}"') +
            path('M5 3 H14 L19 8 V21 H5 Z') + path('M14 3 V8 H19'))


def file_badge(txt):
    w = text_width(txt)
    body = masked(document(),
                  ['<rect x="1" y="10" width="22" height="11" rx="2.5" '
                   'fill="#000"/>'])
    body += path('M5 20 V21 H19 V20')
    body += '<rect x="2" y="11" width="20" height="9" rx="1.5" fill="{acc}"/>'
    body += pixel_text(txt, 2 + (20 - w + 1) // 2, 13, '{on_acc}')
    return body


def frame_glyph():
    # an image frame: rounded rectangle with a little "star field"
    return (rect(2, 4, 17, 14, 2, fill=TINT) +
            dot(7, 9, 1.5) + dot(13, 13, 1.2) + dot(14, 8, 0.9))


def axes(curve):
    return path('M4 3 V20 H21') + curve


def stacked(front_fill):
    """Two overlapping frames; the back one is knocked out behind the front."""
    back = rect(8, 3, 13, 11, 1.5)
    hole = '<rect x="1" y="8" width="17" height="15" rx="3" fill="#000"/>'
    return masked(back, [hole]) + rect(3, 10, 13, 11, 1.5, fill=front_fill)


def window(panel):
    return rect(2, 4, 20, 16, 2) + panel


# --------------------------------------------------------------------------
# the icons

ICONS = {}


def icon(name, w=24, h=24):
    def deco(fn):
        ICONS[name] = (fn, w, h)
        return fn
    return deco


# -- edit modes ------------------------------------------------------------

@icon('edit_none')
def _():
    d = 'M6 3 V19 L10 15.5 L13 21 L15.5 19.8 L12.7 14.5 L18 14 Z'
    return fpath(d, '{tint}', 'fill-opacity="{tint_op}"') + path(d)


@icon('edit_region')
def _():
    out = rect(5.5, 5.5, 13, 13, 0,
               'fill="none" stroke="{ink}" stroke-width="1" '
               'stroke-dasharray="2 2" stroke-opacity=".55"')
    out += circle(12, 12, 6.5, fill=TINT)
    for x, y in ((5.5, 5.5), (18.5, 5.5), (5.5, 18.5), (18.5, 18.5)):
        out += '<rect x="%g" y="%g" width="5" height="5" rx="1" ' \
               'fill="{acc}"/>' % (x - 2.5, y - 2.5)
    return out


@icon('edit_crosshair')
def _():
    return (path('M12 2 V8 M12 16 V22 M2 12 H8 M16 12 H22') +
            dot(12, 12, 2, '{acc}'))


@icon('edit_colorbar')
def _():
    return circle(12, 12, 9) + fpath('M12 3 A9 9 0 0 1 12 21 Z')


@icon('edit_pan')
def _():
    return (path('M12 3 V21 M3 12 H21') +
            path('M9 6 L12 3 L15 6 M9 18 L12 21 L15 18 '
                 'M6 9 L3 12 L6 15 M18 9 L21 12 L18 15'))


@icon('edit_zoom')
def _():
    return magnifier()


@icon('edit_rotate')
def _():
    return (path('M20 12 A8 8 0 1 1 17.66 6.34') +
            path('M20 3 V8 H15') + dot(12, 12, 2, '{acc}'))


@icon('edit_crop')
def _():
    return (fpath('M6 6 H18 V18 H6 Z', '{tint}', 'fill-opacity="{tint_op}"') +
            path('M6 2 V18 H22 M2 6 H18 V22'))


@icon('edit_catalog')
def _():
    out = ''
    for cx, cy, r, c in ((7, 7, 4, '{ink}'), (17, 9, 3.5, '{acc}'),
                         (9, 17, 3.5, '{ink}'), (18, 19, 2.5, '{ink}')):
        st = S.replace('{ink}', c).replace('stroke-width="2"',
                                           'stroke-width="1.6"')
        out += circle(cx, cy, r, st) + dot(cx, cy, 1.1, c)
    return out


@icon('edit_footprint')
def _():
    out = ''
    for x, y in ((4, 4), (12.5, 4), (4, 12.5), (12.5, 12.5)):
        out += rect(x, y, 7.5, 7.5, 0.5,
                    S.replace('stroke-width="2"', 'stroke-width="1.6"'),
                    fill=TINT)
    return '<g transform="rotate(-18 12 12)">%s</g>' % out


@icon('edit_examine')
def _():
    eye = 'M2 12 C5 7 8.5 5 12 5 C15.5 5 19 7 22 12 C19 17 15.5 19 12 19 ' \
          'C8.5 19 5 17 2 12 Z'
    return (fpath(eye, '{tint}', 'fill-opacity="{tint_op}"') + path(eye) +
            circle(12, 12, 3.5) + dot(12, 12, 1.6, '{acc}'))


@icon('edit_3d')
def _():
    return (fpath('M12 3 L20 7.5 L12 12 L4 7.5 Z', '{tint}',
                  'fill-opacity=".35"') +
            path('M12 3 L20 7.5 V16.5 L12 21 L4 16.5 V7.5 Z') +
            path('M4 7.5 L12 12 L20 7.5 M12 12 V21'))


@icon('edit_illustrate')
def _():
    thin = S.replace('stroke-width="2"', 'stroke-width="1.2"')
    out = path('M5 19 C5 9 19 15 19 5')
    out += path('M5 19 L11 19 M19 5 L13 5', thin)
    out += dot(11, 19, 1.5) + dot(13, 5, 1.5)
    out += rect(2.5, 16.5, 5, 5, 1, 'fill="{acc}"')
    out += rect(16.5, 2.5, 5, 5, 1, 'fill="{acc}"')
    return out


# -- region shapes ---------------------------------------------------------

@icon('circle')
def _():
    return circle(12, 12, 8, fill=TINT)


@icon('annulus')
def _():
    ring = ('M12 3 A9 9 0 1 1 11.99 3 Z M12 7.5 A4.5 4.5 0 1 0 12.01 7.5 Z')
    return (fpath(ring, '{tint}', 'fill-opacity=".3" fill-rule="evenodd"') +
            circle(12, 12, 9) + circle(12, 12, 4.5))


@icon('ellipse')
def _():
    return ('<g transform="rotate(-30 12 12)">'
            '<ellipse cx="12" cy="12" rx="9.5" ry="5.5" %s/>'
            '<ellipse cx="12" cy="12" rx="9.5" ry="5.5" %s/></g>'
            % (TINT, S))


@icon('box')
def _():
    return rect(3, 6, 18, 12, 0.5, fill=TINT)


@icon('poly')
def _():
    d = 'M4 16 L5 7 L12 3 L20 8 L17 20 L9 20 Z'
    return fpath(d, '{tint}', 'fill-opacity="{tint_op}"') + path(d)


@icon('text')
def _():
    return (path('M5 7 V4 H19 V7', S.replace('"2"', '"2.4"')) +
            path('M12 4 V20 M9 20 H15', S.replace('"2"', '"2.4"')))


@icon('region_other')
def _():
    return (circle(7.5, 7.5, 4, fill=TINT) +
            rect(13, 13, 7, 7, 0.5, fill=TINT) +
            fpath('M17 3 L21 10 H13 Z', '{tint}', 'fill-opacity="{tint_op}"') +
            path('M17 3 L21 10 H13 Z') +
            dot(5, 17, 1.4, '{acc}') + dot(8.5, 17, 1.4, '{acc}'))


# -- region info / list / file ---------------------------------------------

@icon('region_info')
def _():
    return (circle(12, 12, 9, fill=TINT) + path('M12 11 V17') +
            dot(12, 7.5, 1.4))


@icon('region_list')
def _():
    st = SA.replace('stroke-width="2"', 'stroke-width="1.6"')
    out = ''
    for y in (6, 12, 18):
        out += circle(5, y, 2, st) + path('M10 %d H21' % y)
    return out


@icon('region_open')
def _():
    return folder_open() + circle(17, 5, 3, SA)


@icon('region_save')
def _():
    d = 'M3 4 A1 1 0 0 1 4 3 H16 L21 8 V20 A1 1 0 0 1 20 21 H4 ' \
        'A1 1 0 0 1 3 20 Z'
    return (fpath(d, '{tint}', 'fill-opacity="{tint_op}"') + path(d) +
            path('M7 3 V8 H14 V3') + circle(12, 15, 3, SA))


# -- region properties -----------------------------------------------------

@icon('srcbkg')
def _():
    return (circle(7.5, 12, 5, fill=TINT) +
            circle(16.5, 12, 5, S.replace('stroke-linecap="round"',
                                          'stroke-dasharray="2.2 1.73"')))


@icon('incexl')
def _():
    warn = S.replace('{ink}', '{warn}')
    return (circle(7, 12, 4.5, fill=TINT) + circle(17, 12, 4.5) +
            path('M13 17 L21 7', warn))


@icon('front')
def _():
    return (path('M14 8 V4 A1 1 0 0 0 13 3 H4 A1 1 0 0 0 3 4 V13 '
                 'A1 1 0 0 0 4 14 H8') +
            rect(10, 10, 11, 11, 1.5, 'fill="{acc}"'))


@icon('back')
def _():
    return (fpath('M3 4 A1 1 0 0 1 4 3 H13 A1 1 0 0 1 14 4 V8 H8 V14 '
                  'H4 A1 1 0 0 1 3 13 Z', '{acc}') +
            rect(10, 10, 11, 11, 1.5, fill=TINT))


@icon('region_compose')
def _():
    return (rect(2, 2, 20, 20, 3) +
            rect(6, 6, 7, 7, 0.5, fill=TINT) + circle(15, 15, 4, fill=TINT))


@icon('region_dissolve')
def _():
    dash = S.replace('stroke-linecap="round"', 'stroke-dasharray="3 2.6"')
    return (rect(2, 2, 20, 20, 3, dash) +
            rect(5, 5, 7, 7, 0.5, fill=TINT) + circle(16, 16, 4, fill=TINT))


@icon('region_group')
def _():
    tag = 'M2 3 V10 L12 20 L19 13 L9 3 Z'
    glyph = (fpath(tag, '{tint}', 'fill-opacity="{tint_op}"') + path(tag) +
             dot(6, 7, 1.5))
    return with_badge(glyph, '+')


# -- line widths (24x12) ---------------------------------------------------

def lw(width):
    y = 6 if width % 2 == 0 else 6.5
    return ('<path d="M3 %g H21" stroke="{ink}" stroke-width="%d" '
            'stroke-linecap="round"/>' % (y, width))


for _w in (1, 2, 3, 4):
    icon('lw%d' % _w, 24, 12)(lambda w=_w: lw(w))


# -- top bar: file ---------------------------------------------------------

@icon('file_open')
def _():
    return folder_open()


@icon('save_as_eps')
def _():
    return file_badge('EPS')


@icon('save_as_png')
def _():
    return file_badge('PNG')


@icon('print')
def _():
    return (path('M6 9 V3 H18 V9') +
            fpath('M5 9 H19 A2 2 0 0 1 21 11 V17 H3 V11 A2 2 0 0 1 5 9 Z',
                  '{tint}', 'fill-opacity="{tint_op}"') +
            path('M6 17 H5 A2 2 0 0 1 3 15 V11 A2 2 0 0 1 5 9 H19 '
                 'A2 2 0 0 1 21 11 V15 A2 2 0 0 1 19 17 H18') +
            rect(6, 14, 12, 7, 0.5) + dot(17.5, 12, 1.1, '{acc}'))


@icon('backup')
def _():
    return (path('M3.5 15 A9 9 0 1 0 5.5 5.8') + path('M5 2 V6.5 H9.5') +
            apath('M12 7 V12 L15.5 14.5'))


@icon('prism')
def _():
    thin = 'fill="none" stroke-width="1.6" stroke-linecap="round"'
    return (fpath('M11 3 L20 20 H2 Z', '{tint}', 'fill-opacity="{tint_op}"') +
            path('M11 3 L20 20 H2 Z') +
            '<path d="M1 14 L8 11.5" stroke="{ink}" %s/>' % thin +
            '<path d="M14 11 L23 7.5" stroke="#e5484d" %s/>' % thin +
            '<path d="M14.6 12.2 L23 11.5" stroke="#30a46c" %s/>' % thin +
            '<path d="M15.2 13.4 L23 15.5" stroke="#3e7bfa" %s/>' % thin)


@icon('notes')
def _():
    return (rect(4, 4, 16, 18, 2, fill=TINT) + path('M8 2 V6 M16 2 V6') +
            path('M8 11 H16 M8 15 H16 M8 19 H12'))


# -- top bar: colour / scale -----------------------------------------------

def gradient(gid, x1, x2):
    return ('<linearGradient id="%s" x1="%g" x2="%g" y1="0" y2="0" '
            'gradientUnits="userSpaceOnUse">'
            '<stop offset="0" stop-color="{ink}" stop-opacity="1"/>'
            '<stop offset="1" stop-color="{ink}" stop-opacity="0.05"/>'
            '</linearGradient>' % (gid, x1, x2))


@icon('colorbar_reverse')
def _():
    thin = S.replace('stroke-width="2"', 'stroke-width="1.4"')
    return ('<defs>%s%s</defs>' % (gradient('ga', 3, 21), gradient('gb', 21, 3)) +
            '<rect x="3" y="3" width="18" height="7" rx="1.5" fill="url(#ga)"/>' +
            rect(3, 3, 18, 7, 1.5, thin) +
            '<rect x="3" y="14" width="18" height="7" rx="1.5" fill="url(#gb)"/>' +
            rect(3, 14, 18, 7, 1.5, thin))


@icon('lin')
def _():
    return axes(apath('M7 17 L20 4'))


@icon('log')
def _():
    return axes(apath('M7 17 C8 9 12 5 20 4'))


@icon('pow')
def _():
    return axes(apath('M7 17 C15 17 19 12 20 4'))


@icon('scale_other')
def _():
    return axes(dot(9, 13, 1.6, '{acc}') + dot(13.5, 13, 1.6, '{acc}') +
                dot(18, 13, 1.6, '{acc}'))


@icon('scale_limits')
def _():
    hist = 'M3 21 V17 H6 V11 H9 V6 H12 V9 H15 V14 H18 V18 H21 V21 Z'
    return (fpath(hist, '{tint}', 'fill-opacity=".3"') +
            path('M3 21 H21') +
            apath('M7 4 V21 M17 4 V21') +
            fpath('M5 2 H9 L7 4.5 Z M15 2 H19 L17 4.5 Z', '{acc}',
                  'stroke="{acc}" stroke-width="1" stroke-linejoin="round"'))


@icon('smooth')
def _():
    out = ''
    for i in range(-2, 3):
        for j in range(-2, 3):
            d = math.hypot(i, j)
            r = 2.3 * math.exp(-d * d / 5.5)
            if r > 0.45:
                out += dot(12 + 4 * i, 12 + 4 * j, round(r, 2))
    return out


@icon('contour')
def _():
    out = ''
    for R, cx, cy in ((9.3, 12, 12), (5.6, 12.8, 11.3)):
        pts = []
        for i in range(10):
            t = 2 * math.pi * i / 10
            r = R * (1 + 0.1 * math.sin(2 * t + 0.6) + 0.04 * math.cos(3 * t))
            pts.append((cx + r * math.cos(t), cy + r * math.sin(t)))
        out += path(smooth_closed(pts))
    return out + dot(13.4, 10.8, 2, '{acc}')


@icon('match')
def _():
    return ('<g transform="rotate(-45 12 12)">' +
            rect(1.5, 8.5, 12, 7, 3.5) + rect(10.5, 8.5, 12, 7, 3.5, SA) +
            '</g>')


@icon('coord_grid')
def _():
    thin = SA.replace('stroke-width="2"', 'stroke-width="1.4"')
    return (rect(3, 3, 18, 18, 2) +
            path('M9 3 Q7.4 12 9 21 M15 3 Q16.6 12 15 21 '
                 'M3 9 Q12 6.8 21 9 M3 15 Q12 12.8 21 15', thin))


@icon('quit')
def _():
    return path('M17.66 6.34 A8 8 0 1 1 6.34 6.34') + path('M12 3 V12')


# -- panner ----------------------------------------------------------------

@icon('north_up')
def _():
    return (path('M7 21 V3 M3 7 L7 3 L11 7') +
            apath('M14 13 V4 L20 13 V4'))


@icon('center')
def _():
    return (circle(12, 12, 7) + path('M12 2 V5 M12 19 V22 M2 12 H5 M19 12 H22')
            + dot(12, 12, 2.5, '{acc}'))


# -- bottom bar: bin / block / zoom ----------------------------------------

def bin_glyph():
    return (fpath('M2 14 V9 H5 V14 Z M6.5 14 V3 H9.5 V14 Z '
                  'M11 14 V6 H14 V14 Z', '{ink}') +
            path('M1 16.5 H15', S.replace('"2"', '"1.5"')))


def block_glyph():
    out = ''
    for (x, y), op in zip(((2, 2), (9, 2), (2, 9), (9, 9)),
                          (0.9, 0.35, 0.55, 0.9)):
        out += '<rect x="%d" y="%d" width="6" height="6" rx="1" ' \
               'fill="{ink}" fill-opacity="%g"/>' % (x, y, op)
    return out


for _s, _n in (('+', 'increase'), ('-', 'decrease'), ('1', 'one')):
    icon('bin_' + _n)(lambda s=_s: with_badge(bin_glyph(), s))
    icon('block_' + _n)(lambda s=_s: with_badge(block_glyph(), s))


def zoom_sign(sign):
    out = ''
    if sign in '+-':
        out += apath('M7 10 H13')
    if sign == '+':
        out += apath('M10 7 V13')
    if sign == '1':
        out += apath('M8.3 8.2 L10 7 V13')
    return magnifier(out)


icon('zoom_plus')(lambda: zoom_sign('+'))
icon('zoom_minus')(lambda: zoom_sign('-'))
icon('zoom_one')(lambda: zoom_sign('1'))

# -- bottom bar: frames ----------------------------------------------------

icon('frame_add')(lambda: with_badge(frame_glyph(), '+'))
icon('frame_del')(lambda: with_badge(frame_glyph(), '-'))


def tri(d):
    return fpath(d, '{ink}', 'stroke="{ink}" stroke-width="2" '
                 'stroke-linejoin="round"')


icon('frame_next')(lambda: tri('M8 5 L18 12 L8 19 Z'))
icon('frame_prev')(lambda: tri('M16 5 L6 12 L16 19 Z'))
icon('frame_last')(lambda: tri('M5 5 L14 12 L5 19 Z') + path('M19 5 V19'))
icon('frame_first')(lambda: tri('M19 5 L10 12 L19 19 Z') + path('M5 5 V19'))


@icon('frame_single')
def _():
    return rect(3, 4, 18, 16, 2, fill=TINT)


@icon('frame_tile')
def _():
    return rect(3, 4, 18, 16, 2, fill=TINT) + path('M12 4 V20 M3 12 H21')


@icon('frame_blink')
def _():
    return (stacked(TINT) +
            fpath('M10.5 11.5 L7 16.5 H9.5 L8.5 20 L12.5 14.5 H10 Z', '{acc}',
                  'stroke="{acc}" stroke-width="0.8" stroke-linejoin="round"'))


@icon('frame_fade')
def _():
    g = ('<defs><linearGradient id="gf" x1="3" x2="16" y1="0" y2="0" '
         'gradientUnits="userSpaceOnUse">'
         '<stop offset="0" stop-color="{acc}" stop-opacity=".95"/>'
         '<stop offset="1" stop-color="{acc}" stop-opacity="0"/>'
         '</linearGradient></defs>')
    return g + stacked('fill="url(#gf)"')


@icon('frame_reveal')
def _():
    return (rect(3, 4, 18, 16, 2) +
            fpath('M5 4 H12 V20 H5 A2 2 0 0 1 3 18 V6 A2 2 0 0 1 5 4 Z',
                  '{tint}', 'fill-opacity=".35"') +
            apath('M12 2 V22') + dot(12, 12, 3, '{acc}'))


# -- bottom bar: view toggles ----------------------------------------------

@icon('view_vertical')
def _():
    thin = SA.replace('stroke-width="2"', 'stroke-width="1.5"')
    return window(path('M15 4 V20') +
                  path('M18.5 6.5 L17.5 9 L19.5 11.5 L17.5 14.5 L18.5 17.5',
                       thin))


@icon('view_horizontal')
def _():
    thin = SA.replace('stroke-width="2"', 'stroke-width="1.5"')
    return window(path('M2 13 H22') +
                  path('M5 17.5 L8 15.5 L11 17.5 L14 15.5 L16.5 17 L19 16',
                       thin))


@icon('view_colorbar')
def _():
    g = ('<defs><linearGradient id="gc" x1="5" x2="19" y1="0" y2="0" '
         'gradientUnits="userSpaceOnUse">'
         '<stop offset="0" stop-color="{ink}" stop-opacity="1"/>'
         '<stop offset="1" stop-color="{ink}" stop-opacity=".08"/>'
         '</linearGradient></defs>')
    return g + window(path('M2 14 H22') +
                      '<rect x="5" y="16" width="14" height="2" '
                      'fill="url(#gc)"/>')


# --------------------------------------------------------------------------

def svg(name, theme):
    fn, w, h = ICONS[name]
    masked.n = 0
    body = fn()
    for k, v in THEMES[theme].items():
        body = body.replace('{%s}' % k, str(v))
    return ('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" '
            'viewBox="0 0 %d %d">%s</svg>' % (w, h, w, h, body))


def main():
    here = os.path.dirname(os.path.abspath(__file__))
    outdir = sys.argv[1] if len(sys.argv) > 1 else \
        os.path.join(here, '..', '..', 'icons')
    for theme in THEMES:
        d = os.path.join(outdir, theme)
        os.makedirs(d, exist_ok=True)
        for name in sorted(ICONS):
            png = os.path.join(d, name + '.png')
            subprocess.run(['rsvg-convert', '-f', 'png', '-o', png],
                           input=svg(name, theme).encode(), check=True)
    print('wrote %d icons x %d themes to %s'
          % (len(ICONS), len(THEMES), outdir))


if __name__ == '__main__':
    main()
