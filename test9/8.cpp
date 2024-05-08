#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{   srand(time(NULL));
    int a[15] = {0};
    for (int i = 0;i<15;++i)
    {
        a[i] = rand()%20;
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
}