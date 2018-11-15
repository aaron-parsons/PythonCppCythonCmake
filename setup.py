'''
This is an example setup.py
'''


from setuptools import setup, find_packages
import setuptools, setuptools.command.build_ext
import subprocess
from distutils.extension import Extension
from Cython.Build import cythonize

import numpy as np
import os

libdirs = [os.path.abspath('the_cpp_part'), os.path.abspath('build/the_cpp_part')]
if 'LD_LIBRARY_PATH' in os.environ:
    libdirs += os.environ['LD_LIBRARY_PATH'].split(':')



class BuildExtra(setuptools.command.build_ext.build_ext):
    def run(self):
        src_dir = os.path.abspath('the_cpp_part')
        buildtmp = os.path.abspath(os.path.join('build', 'the_cpp_part'))
        if not os.path.exists(buildtmp):
            os.makedirs(buildtmp)
        env = os.environ.copy()
        subprocess.check_call(['cmake', src_dir, '-DCMAKE_BUILD_TYPE=Release'], cwd=buildtmp, env=env)
        subprocess.check_call(['cmake', '--build', '.'], cwd=buildtmp)
        setuptools.command.build_ext.build_ext.run(self)
        print "COMPLETED BUILD EXT"


extension = Extension('*',
                      sources=['the_cpp_part/cpp_extension.pyx'],
                      include_dirs=[np.get_include()],
                      libraries=['the_cpp_part/ClassWithArgument', 'the_cpp_part/ClassWithZeroArgument'],
                      library_dirs=libdirs,
                      depends=['build/the_cpp_part/libClassWithArgument.a',
                               'build/the_cpp_part/libClassWithZeroArgument.a'],
                      language="c++")



setup(
    name='My cuda play',
    author='Me',
    package_dir={'the_python_part': 'the_python_part', 'the_cpp_part': 'the_cpp_part'},
    packages=find_packages(),
    ext_modules=cythonize(extension),
    cmdclass={'build_ext': BuildExtra}
)