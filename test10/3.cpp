#include <stdio.h>
main()
{
    int z = '0';
    char ch[7] = {"12ab56"};
    int i, s = 0;
    for (i = 0; ch[i] >= '0' && ch[i] <= '9'; i += 2)
        s = 10 * s + ch[i] - '0';
    printf("%d\n", s);
}
