#include <stdio.h>
main()
{
    char a[] = "acegikm";
    char b[] = "bdfhjlnpq";
    char c[80] = {0}, *p;
    int i = 0, j = 0, k = 0;
    while (a[i] != '\0' && b[j] != '\0')
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    if (sizeof(a) < sizeof(b))
        p = b + j;
    else
        p = a + i;
    for (; *p != '\0'; p++, k++)
        c[k] = *p;
    puts(c);
    c[k] = '\0';
}
