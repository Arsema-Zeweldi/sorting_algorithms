#include "sort.h"

/**
 * insertion_sort_list - Insertion sort algorithm
 * @list: list to be sorted
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	size_t i;
	size_t j;
	int key;
	size_t size;

	for (i = 1; i < size; i++)
	{
		key = list[i];
		j = i - 1;

		while (j >= 0 && list[j] > key)
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
	}
}
