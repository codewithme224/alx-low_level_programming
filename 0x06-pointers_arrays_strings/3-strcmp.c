#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: return the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, x;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
		else
		{
			x = s1[i] - s2[i];
		}
		i++;
	}

	return (x);
}
