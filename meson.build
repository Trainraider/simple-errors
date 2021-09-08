# SPDX-License-Identifier: GPL-2.0-only
# Full license at https://spdx.org/licenses/GPL-2.0.html

project('template', 'c',
  version : '0.0',
  license : 'GPL-2.0-only',
  default_options : ['warning_level=3',
                     'werror=true',
                     'default_library=both'])
email = '<trainraider7@gmail.com>'
description = 'Prints Hello world'

include = include_directories(['include'])

types_dep = dependency('types', fallback: ['types', 'types_dep'])
testing_dep = dependency('testing', fallback: ['testing', 'testing_dep'])

subdir('source')
subdir('include')
subdir('tests')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries: foo_lib,
  name: 'lib' + meson.project_name(),
  version: meson.project_version(),
  filebase: meson.project_name(),
  subdirs: 'trainslibs',
  url: 'https://github.com/Trainraider/meson-lib-template.git',
  description: description)
