cmake_minimum_required(VERSION 3.9)
project(libmc C)

set(CMAKE_C_STANDARD 11)

set(libmc_headers include/host.h include/version.h)
set(libmc_sources src/host.c src/version.c)

add_library(libmc ${libmc_headers} ${libmc_sources})
target_include_directories(libmc PUBLIC include)