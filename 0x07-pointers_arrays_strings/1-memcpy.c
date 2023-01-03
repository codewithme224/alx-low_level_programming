#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
 *
 * @src: what we are to copy
 *
 * @n: n bytes of @src
 *
 * Return: returns 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[c];
	return (dest);
}
