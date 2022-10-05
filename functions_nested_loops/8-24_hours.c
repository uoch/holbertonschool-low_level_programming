#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
 {
 	 int i ,j ;
	 i = 0 ;
	 j = 0;
	 for (i < 24 ; i++)
	 {
	 	for (j < 60 ; j++)
		{
		if (j < 10 || i<10)
			_putchar('0'i':''0'j);
		else
		_putchar(i':'j);
		}		
	 }
 }

