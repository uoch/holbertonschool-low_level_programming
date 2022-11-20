#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int b = 90;
	int c = 122;

	for (i = 97; i <= c; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= b; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
