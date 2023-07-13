#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: copied memory destination
 * @src: copied memory source
 * @n: number of bytes of memory to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
