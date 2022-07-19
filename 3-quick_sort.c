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
	int p = 0;

	if (low < high)
	{
		p = partition(array, size, low, high);

		quick_sort_recursion(array, size, low, p - 1);
		quick_sort_recursion(array, size, p + 1, high);
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
	int pivot = array[high];
	int i;
	int j;

	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > pivot)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}
