#include "main.h"
/**
 * print_last_digit - Sign of number
 *
 * Return: 0
 */
int _abs(int);
int print_last_digit(int n)
{
     int  mod ;

     mod = n % 10 ;
     if (mod<0)
     {
        mod = _abs(mod);
     }
     _putchar(mod + '0');
     return (mod);
}