#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
        int i = 97;
while ( i <= 122 && (i != 113 && i != 101))
{   
        putchar(i);
    i++;
}
        putchar('\n');
return (0);
}
