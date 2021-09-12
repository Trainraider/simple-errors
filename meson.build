# SPDX-License-Identifier: GPL-2.0-only
# Full license at https://spdx.org/licenses/GPL-2.0.html

project('simple-errors', 'c',
  version : '0.0',
  license : 'GPL-2.0-only',
  default_options : ['warning_level=3',
                     'werror=true',
                     'default_library=both'])
email = '<trainraider7@gmail.com>'
description = 'Just simple error handling'

include = include_directories(['include'])

types_dep = dependency('types', fallback : ['types', 'types_dep'])

subdir('tests')
subdir('include')
simple_errors_dep = declare_dependency(include_directories: include)

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name: 'lib' + meson.project_name(),
  version: meson.project_version(),
  filebase: meson.project_name(),
  subdirs: 'trainslibs',
  url: 'https://github.com/Trainraider/simple-errors.git',
  description: description)
