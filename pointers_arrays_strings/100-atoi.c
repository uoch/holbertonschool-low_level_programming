#include "main.h"

int _atoi(char *s)
{
    int i = 0; 
    int n = 0;
    while (*(s + i))
    {
        if ((*(s + i) == '+') || (*(s + i) == '-'))
        if ((*(s + ( i + 1) >= '0') && (*(s + ( i + 1) <= '9')) 
        i++;
    }
    n = i + 1;
    return (n);
}