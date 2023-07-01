#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: one of the strings to compare
 * @s2: the other string to compare
 * Return: difference in length
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
