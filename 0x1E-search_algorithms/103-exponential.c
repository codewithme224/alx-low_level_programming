#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @low: lowest index to print
 * @high: highest index to print
 *
 * Return: none
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);

		if (i < high)
			printf(", ");
	}

	printf("\n");
}


/**
 * b_search - searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: lowest index to search in
 * @high: highest index to search in
 * @value: value to search for
 *
 * Return: index where value is located. If value is not
 *         present in array or if array is NULL, return -1
 */

int b_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array
 *                      of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located. If value is not
 *         present in array or if array is NULL, return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}

	low = i / 2;
	high = i;

	if (high >= size)
		high = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (b_search(array, low, high, value));
}
