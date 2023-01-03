#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string to locate the character from
 *
 * @c: the character located
 *
 * Return: first occurence of character or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
