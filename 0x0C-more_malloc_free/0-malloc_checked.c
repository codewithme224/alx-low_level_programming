#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: pointer to our new allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *new_memory;

	new_memory = malloc(b);
	if (new_memory == NULL)
		exit(98);
	return (new_memory);
}
