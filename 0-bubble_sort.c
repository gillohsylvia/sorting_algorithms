#include "sort.h"

/**
 * swap_items - function that swaps elements for bubble sort
 * @x: element one pointer
 * @y: element two pointer
 * Return void
 */

void swap_items(int *x, int *y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;

}

/**
 * bubble_sort - function that sorts elements using bubble sort
 * @array: the array to be sorted
 * @size: the size of the array above
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int a;
	int b;
	int length = (int) size;

	if ((array == NULL) || (size < 2))
		return;
	for (a = 0; a < length - 1; a++)

	{
		for (b = 0; b < length - a - 1; b++)

		{
			if (array[b] > array[b + 1])

			{
				swap_items(&array[b], &array[b + 1]);
				print_array(array, size);
			}
		}
	}
}

