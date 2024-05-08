#include <iostream>
int main()
{
    int a, b, cnt = 0;
    a = 10;
    b = 0;
    do
    {
        b += 2;
        a -= 2 + b;
        ++cnt;
    } while (a >= 0);
    std::cout << cnt << std::endl;
}
