#include <stdio.h>
main()
{
    char str[] = "SSSWLiA", c;
    int k;
    for (k = 2; (c = str[k]) != '\0'; k++)
    {
        switch (c)
        {
        case 'i':
            ++k;
            break;
        case 'L':
            continue;
        default:
            putchar(c);
            continue;
        }
        putchar('*');
    }
}
