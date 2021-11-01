# cmake_minimum_required(VERSION <specify CMake version here>)
project(cpp_algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_algorithms src/main.cpp src/sort/sorting_algo.h src/sort/bubble_sort.h src/sort/insertion_sort.h src/sort/selection_sort.h src/sort/heap_sort.h src/sort/quick_sort.h src/sort/merge_sort.h)