#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check for characters
 * @accept: substring
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (l);
		}
	}
	return (l);
}
