#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s : characters of string
 * Return: nothing
 */

void rev_string(char *s)
{
	int n;
	int rev;
	char m;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	rev = n - 1;
	while (rev >= n / 2)
	{
		m = s[rev];
		s[rev] = s[n - rev - 1];
		s[n - rev - 1] = m;
		rev--;
	}
}
