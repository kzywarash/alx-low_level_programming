#include "main.h"

/**
 * _memset - function that fills the first n bytes of
 * the memory area pointed to by s with the constant byte b
 * @s: address of memory to be filled
 * @b: value to be filled in
 * @n: number of bytes to be changed
 * Return: Pointer to filled array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
