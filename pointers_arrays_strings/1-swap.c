#include "main.h"

/**
 * reset_to_98 - resets value of pointer to 98
 * @ a , b: pointer to reset to 98
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c ;
}