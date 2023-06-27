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
    int array[] = {55, 40, 62, 47, 70, 63, 95, 38, 82, 22, 92, 52, 60, 2, 5, 56, 79, 17, 89, 94};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    counting_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
