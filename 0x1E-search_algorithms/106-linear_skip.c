#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located. If
 *         value is not present in list or if head is NULL, return NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);
	current = list;
	prev = list;

	while (current->n < value)
	{
		prev = current;
		if (current->express == NULL)
		{
			while (current->next != NULL)
				current = current->next;
			break;
		}
		current = current->express;
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
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
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
