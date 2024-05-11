# cython-cmake-example
A complete, working example that calls Python code from a native executable and uses CMake

## Install Dependencies
```bash
$ pip3 install cython
```
cd /opt/homebrew/lib/python3.11/site-packages

Run 'python3.10-config --include' do get this include path
include_directories(/opt/homebrew/opt/python@3.11/Frameworks/Python.framework/Versions/3.10/include/python3.11)

## References
 1. [aniongithub/native-python-caller](https://github.com/aniongithub/native-python-caller/)
 2. [https://stackoverflow.com/a/58847011/802203](https://stackoverflow.com/a/58847011/802203)