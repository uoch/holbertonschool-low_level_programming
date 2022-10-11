

int _strcmp(char *s1, char *s2)
{
    int i, j, n;

    i = j = 0;
    while (*(s1 + i) || *(s2 + j))
    {
        n = (*(s1 + i)) - (*(s2 + j));
        j++;
        i++;
    }
    if (i == j)
    {
        n = 0 ;
    }
    else if (i < j)
    {
        while (*(s2 + j))
            n = -(*(s2 + j));
    }
    else if (i > j)
    {
        while (*(s2 + i))
            n = (*(s2 + i));
    }
    return (n);
}