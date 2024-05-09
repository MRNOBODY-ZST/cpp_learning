#include <stdio.h>
#include <string.h>
int main()
{
    char a[2][80], t;
    int i, j, m, n, len, max;
    for (i = 0; i <= 1; i++)
        gets(a[i]);
    t = a[0][0];
    for (i = 0; i <= 1; i++)
    {
        len = strlen(a[i]);
        for (j = 0; j <= len; j++)
            if (a[i][j] > t)
            {
                max = a[i][j];
                m = i;
                n = j;
            }
    }
    printf("%c %d %d\n", max, m, n);
}
