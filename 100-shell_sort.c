#include "sort.h"

/**
 * shell_sort - Shell sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	int inner, outer;
	int value;
	int interval = 1;
	int i = 0;

	while (interval <= (int) size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (outer = interval; outer < (int) size; outer++)
		{
			value = array[outer];
			inner = outer;

			while (inner > interval - 1 && array[inner - interval] >= value)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}

			array[inner] = value;
		}

		interval = (interval - 1) / 3;
		print_array(array, size);
		i++;
	}
}
