#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: parameter
 *
 * Return: return length of a string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
