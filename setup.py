from distutils.core import setup, Extension
setup(name='pyCPUID', version='1.0',  \
      ext_modules=[Extension('pyCPUID', ['pyCPUID.c'])])