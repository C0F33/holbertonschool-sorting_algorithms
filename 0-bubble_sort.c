#include "sort.h"
/**
*bubble_sort - Sorts a list of arrays
*@array: array to be sorted
*@size: full size of array
*/
void bubble_sort(int *array, size_t size)
{
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size - i - 1; j++)
        if (array[j] > array[j + 1])
            swap(&array[j], &array[j + 1]);
print_array(array, size);
}
    return;
}
