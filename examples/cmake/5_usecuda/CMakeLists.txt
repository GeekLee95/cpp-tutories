cmake_minimum_required(VERSION 2.8.9)
project(cmake_examples)

# for the shared library
find_package(CUDA REQUIRED)
include_directories(${CUDA_INCLUDE_DIRS})
set(CUDA_NVCC_FLAGS "-g -G")
set(GENCODE -gencode=arch=compute_35,code=sm_35)
set(GENCODE ${GENCODE} -gencode=arch=compute_30,code=sm_30)
set(GENCODE ${GENCODE} -gencode=arch=compute_20,code=sm_20)
set(GENCODE ${GENCODE} -gencode=arch=compute_10,code=sm_10)
cuda_add_executable(cuda_hello main.cu)
