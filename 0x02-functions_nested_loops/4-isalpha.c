#include "main.h"
/**
 * 4-isalpha.c - function that checks for alphabetic character
 * @c: charater to be cheched
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
