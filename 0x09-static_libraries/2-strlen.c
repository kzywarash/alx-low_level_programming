#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: characters of string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
