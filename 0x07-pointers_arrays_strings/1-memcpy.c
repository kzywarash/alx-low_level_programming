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
	int i;

	i = 0;
	while (n > 0)
	{
		src[i] = dest[i];
		i++;
		n--;
	}
	return (dest);
}
