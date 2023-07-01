#include "main.h"

/**
 * _strcat - This function appends the src string to the
 * dest string, overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	return (dest);
}
