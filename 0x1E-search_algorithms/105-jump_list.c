#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of
 *             integers using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located. If
 *         value is not present in head or if head is NULL, return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);
	step = sqrt(size);
	current = list;
	prev = list;

	while (current->n < value)
	{
		prev = current;
		for (i = 0; i < step; i++)
		{
			if (current->next == NULL)
				break;
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (current->next == NULL)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		if (prev == current)
			break;
		prev = prev->next;
	}
	if (prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
