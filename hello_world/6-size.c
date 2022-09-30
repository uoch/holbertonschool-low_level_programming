#include<stdio.h>
int main(void) 
{
int intType;
float floatType;
char charType;
long int x;
long long int y;
/* sizeof evaluates the size of a variable*/
printf("Size a char: %zu byte\n", sizeof(charType));
printf("Size an int: %zu bytes\n", sizeof(intType));
printf("Size a long int: %zu bytes\n", sizeof(x));
printf("Size a long long int: %zu bytes\n", sizeof(y));
printf("Size a float: %zu bytes\n", sizeof(floatType));
return (0);
}

