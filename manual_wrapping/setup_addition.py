from distutils.core import setup, Extension

# the c++ extension module
extension_mod = Extension("addition", ["addition.cpp"])

setup(name="addition", ext_modules=[extension_mod])
