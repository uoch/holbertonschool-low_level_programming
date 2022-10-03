#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char l;
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}