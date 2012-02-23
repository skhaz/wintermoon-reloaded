import os
import sys
import platform
import yaml

env = Environment(ENV = { 'PATH' : os.environ['PATH'], 'HOME' : os.environ['HOME'] })
env.ParseConfig('sdl-config --cflags')
env.ParseConfig('sdl-config --libs')

if sys.platform == 'darwin':
    env['FRAMEWORKS'] = ['Cocoa', 'OpenGL']
else:
    env.AppendUnique(LIBS = ['GL'])

env.Append(LIBS = ['SDLmain', 'physfs'])
env.Append(CXXFLAGS = ['-g', '-Wall', '-Werror', '-Wextra', '-DUSE_STL', '-DUSE_SDL'])
env.Append(CPPPATH = ['.'])

env.Program(target = "wintermoon", source = Glob('*.cpp') + Glob('Framework/*.cpp') + Glob('Interfaces/*.cpp') + Glob('Platforms/PC/*.cpp'))

