#include "sort.h"


/**
 * swap - swaps elements
 * @array: array to be sorted
 * @x: int 1
 * @y: int 2
 * Return: void
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * quick_sort - Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, 0, size - 1);
}

/**
 * quick_sort_recursion - recursion of the algorithm
 * @array: array to be sorted
 * @size: size of array
 * @low: int 1
 * @high: int 2
 * Return: void
 */

void quick_sort_recursion(int *array, size_t size, int low, int high)
{
	int index;

	if (low < high)
	{
		index = partition(array, size, low, high);
		quick_sort_recursion(array, size, low, index - 1);
		quick_sort_recursion(array, size, index + 1, high);
	}
}

/**
 * partition - partition
 * @array: array to be sorted
 * @size: size of the array
 * @low: int 1
 * @high: int 2
 * Return: void
 */

size_t partition(int *array, size_t size, int low, int high)
{
	int value = array[high];
	int i = low;
	int j;

	value = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] <= value)
		{
			swap(&array[i], &array[j]);
			i++;
			print_array(array, size);
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return i;
}
