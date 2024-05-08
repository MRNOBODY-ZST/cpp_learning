#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n = 0, c, cnt = 0;

    c = getchar();
    rewind(stdin);
    while (c != 10)
    {
        if ((int)'0' <= c && (int)'9' >= c)
            n++;
        c = getchar();
        rewind(stdin);
        ++cnt;
    }
    cout << n << endl;
    cout << "循环次数为 " << cnt << endl;
}
