cmake_minimum_required(VERSION 3.25)
project(Eembedded_DebugLib C)

set(CMAKE_C_STANDARD 11)

add_executable(Eembedded_DebugLib main.c N_CmdString_debug.c N_formatString.c)
