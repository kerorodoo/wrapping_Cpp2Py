#!/usr/bin/env python

"""
sewtup.py file for SWIG example
"""

from distutils.core import setup, Extension

hello_module = Extension('hello',
        sources=['hello_wrap.cxx', 'hello.cpp'])

setup (name = 'hello',
        version = '0.1',
        author = 'chin',
        description = 'swig wrap demo',
        ext_modules = [hello_module],
        py_modules = ['hello'])
