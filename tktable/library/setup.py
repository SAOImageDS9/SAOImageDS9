#!/usr/bin/env python3
# -*- coding: utf-8 -*-


import os

from setuptools import setup


def read(file_name):
    return open(os.path.join(os.path.dirname(__file__), file_name)).read()


setup(
    name="tktable",
    version="0.0.1a0",
    author="Guilherme Polo",
    author_email="ggpolo@gmail.com",
    maintainer="nbro",
    description="Wrapper library for Python of the homonymous Tk library.",
    long_description=read("README.md"),
    license="The BSD 2-Clause License",
    keywords="table tkinter tcl tk wrapper library",
    url="https://github.com/nbro/tktable",
    include_package_data=True,
    classifiers=[
        "Development Status :: 3 - Alpha",
        "Environment :: Console",
        "Intended Audience :: Developers",
        "Topic :: Software Development :: Wrapper library",
        "License :: OSI Approved :: The BSD 2-Clause License",
        "Operating System :: MacOS :: Mac OS X",
        "Operating System :: Microsoft :: Windows",
        "Operating System :: Microsoft :: Linux",
        "Programming Language :: Python :: 3",
    ],
    entry_points={
        "console_scripts": [
            # type `tktable_demo` on the command line to run a demo
            "tktable_demo = tktable:sample_test"
        ]
    }
)
