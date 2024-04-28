#include <stdbool.h>
#include "sort.h"
/**
 * swap - function swaps two integer position on the array
 * @i: first item to swap
 * @j: preceding item to swap
 *
 */
void swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
/**
 * bubble_sort - function sorts a list of unsorted array of int
 * @array: the pointer to the array
 * @size: of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	bool swaped;
	size_t j;

	swaped = true;
	while (swaped == true)
	{
		swaped = false;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swaped = true;
			}
		}
	}
}
