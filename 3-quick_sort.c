#include "sort.h"


/**
 * swap - swaps elements
 * @array: array to be sorted
 * @x: int 1
 * @y: int 2
 * Return: void
 */

void swap(int *array, int a, int b)
{
	int tmp;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
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

void quick_sort_recursion(int *array, size_t size, int start, int end)
{
	int p;

	if (start < end)
	{
		p = partition(array, size, start, end);
		
		quick_sort_recursion(array, size, start, p - 1);
		quick_sort_recursion(array, size, p + 1, end);
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

size_t partition(int *array, size_t size, int start, int end)
{
	int pivot = array[end];
	int i = start - 1;
	int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j);
			print_array(array, size);
		}
	}
	swap(array, i + 1, end);
	print_array(array, size);
	return (i+1);
}
