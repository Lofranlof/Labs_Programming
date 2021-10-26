#include <stdio.h>
#include <mm_malloc.h>
#include <stdlib.h>

int main()
{
    double array[4];
    double* pointer;
    pointer = &array[0];
    array[0] = -8.8;
    array[1] = 11.2;
    array[2] = 64.67;
    array[3] = 55.32;
    for (int i = 0; i < 4; i++)
    {
        printf("%lf ", *(pointer + i));
    }
    printf("\n");

    double* dynamicArray;
    dynamicArray = (double*)malloc(4 * sizeof(double));
    double* arrayOfNumbers = (double*)realloc(dynamicArray, 7);
    *(dynamicArray + 0) = -8.8;
    *(dynamicArray + 1) = 11.2;
    *(dynamicArray + 2) = 64.67;
    *(dynamicArray + 3) = 55.32;

    for (int i = 0; i < 4; i++)
        printf("%lf ", *(dynamicArray + i));
    free(dynamicArray);
    return 0;//увеличить размер
}
