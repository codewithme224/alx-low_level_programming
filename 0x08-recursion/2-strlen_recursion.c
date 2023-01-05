#include "main.h"

/**
 *  _strlen_recursion - function that returns length of string
 *  @s: string parameter
 *
 *  Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
