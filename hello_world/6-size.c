#include<stdio.h>
int main(void) 
{
int intType;
float floatType;
char charType;
long int x;
long long int y;
/* sizeof evaluates the size of a variable*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(x));
printf("Size of a long long int: %zu byte(s)\n", sizeof(y));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

