#include "sort.h"

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using bubble sort algorithm
 * @array: the array of integers
 * @size: the size of the array
 * Description: it prints the array after every swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	bool swapped_flag;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped_flag = false;
		/*if not swapped, it remains 0*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped_flag = true;
			}
			if (!swapped_flag)
			{
				continue;
			}
		}
	
	}
}
