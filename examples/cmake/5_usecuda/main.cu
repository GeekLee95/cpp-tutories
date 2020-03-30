
#include <stdio.h>
#include <cuda_runtime.h>

__global__ void add (int a, int b, int *c) {
    *c = a + b;
    printf("into add");
}
int main(int argv, char** argc ) {
    printf( "Hello, World!\n" );
    int c;
    int *device_c;
    cudaMalloc((void**)&device_c, sizeof(int));
    add<<<1, 1>>>(2, 7, device_c);
    cudaMemcpy(&c, device_c, sizeof(int),
               cudaMemcpyDeviceToHost);
    printf("2 + 7 = %d\n", c);
    cudaFree(device_c); 
    return 0;
}
