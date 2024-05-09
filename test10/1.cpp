#include <stdio.h>
int main()
{
    char a[20] = "cehiknqtw";
    char s[] = "fba";
    int i, k, j;
    for (k = 0; s[k] != '\0'; k++)
    {
        j = 0;
        while (s[k] >= a[j] && a[j] != '\0')
            j++;
        for (int l = 18; l >= j; --l)
        {
            a[l + 1] = a[l];
        }
        a[j] = s[k];
    }
    puts(a);
}
