#include <stdio.h>
/**
 * main - Main function
 * Return: 0
 */

int main(void)
{
	int a;
	char b;

	a = 0;
	b = 'a';
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
