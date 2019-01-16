load('//:subdir_glob.bzl', 'subdir_glob')

cxx_binary(
  name = 'app',
  header_namespace = '',
  headers = subdir_glob([
    ('include', '**/*.hpp'),
  ]),
  srcs = glob([
    'src/**/*.cpp',
  ]),
  visibility = [
    'PUBLIC',
  ],
)
