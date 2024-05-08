#include <cstdio>
int main()
{
    int a[10] = {1, 2, 2, 3, 4, 3, 4, 5, 1, 5};
    int n = 0, i, j, c, k;
    for (i = 0; i < 10 - n; i++)
    {
        c = a[i];
        for (j = i + 1; j < 10 - n; j++)
            if (a[j] == c)
            {
                for (k = j; k < 10 - n; k++)
                    a[k] = a[k + 1];
                n++;
            }
    }
    for (i = 0; i < (10 - n); i++)
        printf("%d", a[i]);
    printf("\n");
}
