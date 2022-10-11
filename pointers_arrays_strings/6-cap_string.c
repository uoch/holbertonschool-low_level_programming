#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
    int i = 0;
    
    while (*(s + i))
    {
        if ((*(s + i) == ' ') || (*(s + i) == '\t') || (*(s + i) == '\n') || (*(s + i) == ',') || (*(s + i) == ';') || (*(s + i) == '.') || (*(s + i) == '!') || (*(s + i) == '?' || (*(s + i) == '"') || (*(s + i) == '(') || (*(s + i) == ')') || (*(s + i) == '{') || (*(s + i) == '}')))
            {
                *(s + (i + 1)) -= 'a' - 'A';
            }
    }
    return(s);
}
