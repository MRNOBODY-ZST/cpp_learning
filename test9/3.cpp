#include <cstdio>
int main()
{
    int i, f[10];
    f[0] = f[1] = f[2] = 1;
    for (i = 3; i < 10; i++)
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    for (i = 0; i < 10; i++)
    {
        if (i % 4 == 0)
            printf("\n");
        printf("%3d", f[i]);
    }
}
