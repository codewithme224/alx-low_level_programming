#inculde "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to the destination
 * @src: pointer to source
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	x = 0;

	while (dest[x])
		x++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[i];
	dest[x + i] = '\0';

	return (dest);
}
