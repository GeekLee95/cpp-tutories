cmake_minimum_required(VERSION 2.8.9)
project(cmake_examples)

# for the shared library
find_package(CUDA REQUIRED)
SET(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS};-gencode arch=compute_35,code=sm_35;-std=c++11;)
cuda_add_executable(cuda_hello main.cu)
