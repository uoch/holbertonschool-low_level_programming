#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int b = 90;
	int i;
for ( i = 65 ; i <= b ; i++ )
{
	putchar(i);
    putchar(i + 32);

}

	putchar('\n');
return (0);
}
