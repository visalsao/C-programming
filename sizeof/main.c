#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("        Size of int is %2d bytes\n", sizeof(int));
    printf("       Size of long is %2d bytes\n", sizeof(long));
    printf("      Size of float is %2d bytes\n", sizeof(float));
    printf("       Size of char is %2d bytes\n", sizeof(char));
    printf("    Size of pointer is %2d bytes\n", sizeof(int *));
    printf("Size of long double is %2d bytes\n", sizeof(long double));

    return 0;
}
