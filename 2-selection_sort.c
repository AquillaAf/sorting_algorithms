#include "sort.h"
#include <stdbool.h>
/**
 * swap - swaps two integer of a list
 * prev: the first element
 * next: the next element
 *
 */
void swap(int *prev, int *next)
{
	int temp;
	temp = *prev;
	*prev = *next;
	*next = temp;
}
/**
 * selection_sort - function sort an array of integer
 * array: a poiner to the array to be sort
 * size: the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temp;
	size_t j = 0;
	while (j < size-1)
	{
		temp = j;
		for(i=j + 1; i < size; i++)
		{
			if (array[temp] > array[i])
			{
				temp = i;
			}
		}
		if (temp != j)
		{
			swap(&array[j], &array[temp]);
			print_array(array, size);
		}
		j++;
	}
}

