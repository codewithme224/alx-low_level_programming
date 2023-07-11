#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @low: lowest index to print
 * @high: highest index to print
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
 * binary_search_advanced - searches for a value in a sorted
 *                          array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: lowest index to search in
 * @high: highest index to search in
 * @value: value to search for
 *
 * Return: index where value is located. If value is not
 *         present in array or if array is NULL, return -1
 */

int binary_search_advanced(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = (low + high) / 2;

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] >= value)
		return (binary_search_advanced(array, low, mid, value));
	else
		return (binary_search_advanced(array, mid + 1, high, value));
}


/**
 * advanced_binary - searches for a value in a sorted array of
 *                   integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located. If value is not
 *         present in array or if array is NULL, return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_advanced(array, 0, size - 1, value));
}
