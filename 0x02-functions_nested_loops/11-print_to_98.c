#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number to start printing from
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n >= 98; n--)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else
	{
		for (n <= 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
}
