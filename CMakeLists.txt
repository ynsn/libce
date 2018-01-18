cmake_minimum_required(VERSION 3.9)
project(libmc C)

set(CMAKE_C_STANDARD 11)

set(libmc_sources libmc/host.h libmc/host.c)

add_library(libmc)