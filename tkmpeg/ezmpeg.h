//This file is part of ezMPEG
//Copyright (C)2002 Ingo Oppermann ( ingo_opp@users.sourceforge.net / http://sourceforge.net/projects/ezmpeg/ )
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either
//version 2 of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

// Version 0.1

typedef struct ezMPEGStream {
	char *outfile;
	FILE *out;
	int hsize;
	int vsize;
	int picture_rate;
	int gop_size;
	int dc_prev[3];
	double q_scale;

	int picture_count;
	int buffersize;
	int buffercount;
	char *buffer;
	int buf;
	int pos;

	short error_code;
	char error_msg[256];
} ezMPEGStream;

typedef struct Block {
	float a[64];
} Block;

typedef struct Macroblock {
	Block lum[4];
	Block chrom[2];
} Macroblock;

// Prototypes
// 'sichtbare' Funktionen. Nur diese 5 Funktionen werden direkt benutzt
int ezMPEG_Init(ezMPEGStream *ms, const char *outfile, int hsize, int vsize, int picture_rate, int gop_size, int q_scale);
int ezMPEG_Start(ezMPEGStream *ms);
int ezMPEG_Add(ezMPEGStream *ms, unsigned char *picture);
int ezMPEG_Finalize(ezMPEGStream *ms);
void ezMPEG_Resize(ezMPEGStream *ms, unsigned char *outbild, unsigned char *inbild, int x, int y, int u, int v);
char *ezMPEG_GetLastError(ezMPEGStream *ms);

// 'unsichtbare' Funktionen
void ezMPEG_InitBitBuffer(ezMPEGStream *ms);
void ezMPEG_ByteAlign(ezMPEGStream *ms);
int ezMPEG_WriteBits(ezMPEGStream *ms, unsigned int value, int length);

void ezMPEG_WriteSequenceHeader(ezMPEGStream *ms);
void ezMPEG_WriteGOPHeader(ezMPEGStream *ms);
void ezMPEG_WritePictureHeader(ezMPEGStream *ms);

Macroblock ezMPEG_GetMacroblock(ezMPEGStream *ms, unsigned char *picture, int number);
Macroblock ezMPEG_QuantizeMacroblock(ezMPEGStream *ms, Macroblock mb);
void ezMPEG_WriteMacroblock(ezMPEGStream *ms, Macroblock mb);

float ezMPEG_1DFDCT(float *v, int i);

void ezMPEG_EncodeDC(ezMPEGStream *ms, int dc_diff, int type);
void ezMPEG_EncodeAC(ezMPEGStream *ms, int runlength, int level);

void ezMPEG_FlushBuffer(ezMPEGStream *ms);
void ezMPEG_SetError(ezMPEGStream *ms, const char *error_msg);
