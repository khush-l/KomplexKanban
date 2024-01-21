cmake_minimum_required(VERSION 3.10)
project(MyProject)

add_library(ComplexLibrary STATIC
  lib/abs.cpp
  lib/add.cpp
  lib/arg.cpp
  lib/Complex.cpp
  lib/conj.cpp
  lib/cos.cpp
  lib/cosh.cpp
  lib/division.cpp
  lib/equality.cpp
  lib/extraction.cpp
  lib/exp.cpp
  lib/imag.cpp
  lib/insertion.cpp
  lib/multiply.cpp
  lib/norm.cpp
  lib/real.cpp
  lib/sin.cpp
  lib/sinh.cpp
  lib/sqrt.cpp
  lib/subtract.cpp
  lib/tan.cpp
  lib/tanh.cpp
  lib/Complex.hpp
  lib/Complex.h
  lib/polar.cpp
  lib/log.cpp
)

add_executable(ComplexRunner
  main_test.cpp
  ../tests/catch_amalgamated.o
)

target_link_libraries(ComplexRunner PRIVATE ComplexLibrary)