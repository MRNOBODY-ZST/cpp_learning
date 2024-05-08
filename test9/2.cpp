#include <cstdio>
int main()
{
    int i = 0, base, n, j = 0, num[20] = {0};
    printf("Enter  data  that  will  be  converted\n");
    scanf("%d", &n);
    printf("Enter   base \n");
    scanf("%d", &base);
    do
    {
        i++;
        num[i-1] = n % base;
        n = n / base;
    } while (n != 0);
    printf("The data %d has been converted into the %d ——base data:\n", n, base);
    for (j = i-1; j >= 0; j--)
        printf("%d", num[j]);
}