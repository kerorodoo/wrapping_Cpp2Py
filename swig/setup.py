#!/usr/bin/env python

"""
setup.py file for SWIG demo
"""

from distutils.core import setup, Extension

hello_module = Extension('_hello',
        sources=['hello_wrap.cxx', 'hello.cpp'])

setup (name = 'hello',
       version = '0.1',
       author = 'chin',
       description = 'swig wrap C++ demo',
       ext_modules = [hello_module],
       py_modules = ['hello'])
