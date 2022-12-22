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
	int con = 0, j = 0;

	while (dest[con++])
		j++;
	for (con = 0; src[con] && con < n; con++)
		dest[j++] = src[con];

	return (dest);
}
