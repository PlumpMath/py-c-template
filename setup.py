from distutils.core import setup, Extension
import numpy.distutils.misc_util
import config

module = config.module
dependencies = ['__wrapper__.c'] + config.dependencies

setup(
    ext_modules=[Extension(module, dependencies)],
    include_dirs=numpy.distutils.misc_util.get_numpy_include_dirs(),
)
