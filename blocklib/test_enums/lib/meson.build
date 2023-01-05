test_enums_sources += []
test_enums_deps += [gnuradio_gr_dep, volk_dep, fmt_dep, spdlog_dep, pmt_dep, python3_embed_dep, json_dep]

block_cpp_args = ['-DHAVE_CPU']

# if IMPLEMENT_CUDA
#     block_cpp_args += '-DHAVE_CUDA'

#     gnuradio_blocklib_test_enums_cu = library('gnuradio-blocklib-test_enums-cu', 
#         test_enums_cu_sources, 
#         include_directories : incdir, 
#         install : true, 
#         dependencies : [cuda_dep])

#     gnuradio_blocklib_test_enums_cu_dep = declare_dependency(include_directories : incdir,
#                         link_with : gnuradio_blocklib_test_enums_cu,
#                         dependencies : cuda_dep)

#     test_enums_deps += [gnuradio_blocklib_test_enums_cu_dep, cuda_dep]

# endif

incdir = include_directories(['../include/gnuradio/test_enums','../include'])
gnuradio_blocklib_test_enums_lib = library('gnuradio-blocklib-test_enums', 
    test_enums_sources, 
    include_directories : incdir, 
    install : true,
    link_language: 'cpp',
    dependencies : test_enums_deps,
    cpp_args : block_cpp_args)

gnuradio_blocklib_test_enums_dep = declare_dependency(include_directories : incdir,
					   link_with : gnuradio_blocklib_test_enums_lib,
                       dependencies : test_enums_deps)

pkg = import('pkgconfig')
libs = [gnuradio_blocklib_test_enums_lib]     # the library/libraries users need to link against
h = ['.'] # subdirectories of ${prefix}/${includedir} to add to header path
pkg.generate(libraries : libs,
             subdirs : h,
             version : meson.project_version(),
             name : 'libgnuradio-blocklib-test_enums',
             filebase : 'gnuradio-blocklib-test_enums',
             description : 'GNU Radio test_enums component')
