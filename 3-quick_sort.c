#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * quick_sort - sorts array of integers in ascending order using Quick sort
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size) {
    if (array == NULL || size < 2)
        return;

    quick_sort_helper(array, 0, size - 1);
}

void quick_sort_helper(int *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quick_sort_helper(array, low, pi - 1);
        quick_sort_helper(array, pi + 1, high);
    }
}

int partition(int *array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            // Swap array[i] and array[j]
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Swap array[i + 1] and array[high]
    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    // Print the array after each swap
    print_array(array, high - low + 1);

    return (i + 1);
}

