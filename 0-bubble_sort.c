#include "sort.h"
/**
*bubble_sort - Sorts a list of arrays
*@array: array to be sorted
*@size: full size of array
*/
void bubble_sort(int *array, size_t size) {
    int temp;

    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
	print_array(array, size);
    }
}
