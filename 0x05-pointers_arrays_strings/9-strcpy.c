#include "main.h"

/**
 * _strcpy - function that copies the string pointed
 *           to by src, including the terminating null byte (\0),
 *
 *
 * @dest: destination of string
 * @src: source of string parameter
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, y = 0;

	for (x = 0; src[x] != '\0'; ++x)
	{
		dest[y] = src[x];
		++y;
	}
	dest[b] = '\0';

	return (dest);
}
