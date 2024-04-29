#ifndef SORT_H
#include <stddef.h>
#define SORT_H
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int arr[], int low, int high);
#endif
