cmake_minimum_required(VERSION 3.9)
project(libce C)

set(CMAKE_C_STANDARD 11)

set(libce_headers include/host.h include/version.h include/ce.h include/format/elf.h include/format/pe.h)
set(libce_sources src/host.c src/version.c)

add_library(libce ${libce_headers} ${libce_sources})
target_include_directories(libce PUBLIC include)