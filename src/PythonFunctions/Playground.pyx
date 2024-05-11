# cython: language_level=3
import sys
import os
dir_path = os.path.dirname(os.path.realpath(__file__))
sys.path.append(f"{dir_path}/PythonPlugins") # Update list of directories that the Python interpreter will search for when it tries to resolve a module name

from hello import hello_world

cdef public void call_hello_world(list names):
    hello_world(names)