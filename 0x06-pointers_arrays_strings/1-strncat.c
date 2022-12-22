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

	while (dest[con])
	{
		con++;
	}

	while (j < n && src[j])
	{
		dest[con] = src[j];
		con++;
		j++;
	}

	dest[con + n + 1] = '\0';

	return (dest);
}
