#include <stdio.h>
#include "sort.h"
/**
*selection_sort - Sorts an array of integers in ascending order using
*the Selection sort algorithm
*@array: Array to be sorted
*@size: Size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;

	if (array == NULL || size < 2)
		return;


	for (i = 0; i < size - 1; i++)
	{
		size_t min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;

			print_array(array, size);
		}
	}
}
