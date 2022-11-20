#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		if (i != j)
		{
			for (j = i + 1; j <= 57; j++)
			{
				if ((i != j))
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
