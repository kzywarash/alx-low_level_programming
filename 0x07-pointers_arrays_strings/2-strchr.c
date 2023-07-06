#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: strinng to check
 * @c: character to search for
 * Return: pointer to the first occurrence of the character c
 * in the string s, NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (0);
	}
}
