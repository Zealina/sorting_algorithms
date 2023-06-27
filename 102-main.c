#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {1, 43, 24, 48, 40, 13, 14, 44, 18, 16, 30, 23, 25, 35, 9, 50, 45, 7, 27, 38, 39, 49, 8, 3, 4, 32, 5, 42, 46, 36, 20, 28, 31, 22, 26, 11, 29, 10, 37, 2, 15, 33, 34, 19, 6, 21, 17, 12, 41, 47};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    counting_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
