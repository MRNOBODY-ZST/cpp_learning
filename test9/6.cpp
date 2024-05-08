#include <iostream>
#include <cmath>
#include <cstring>
// #include <cstdlib>
int main()
{
    int n = 0;
    std::cin >> n;
    int min_list[n][3], min = 0, max = 0, min_row = 0, min_col = 0, max_row = 0, max_col = 0;
    int i = 0,j = 0;
    int tmp_list[3] = {0, 0, 0};
    int cur = 0;
    memset(min_list, {0x3f3f3f3f}, sizeof(min_list));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> cur;
            if (min_list[i][0] > cur)
            {
                min_list[i][0] = cur;
                min_list[i][1] = i;
                min_list[i][2] = j;
            }
        }
        std::cout<<i<<std::endl;
    }
    min = max = min_list[0][0];
    for (int i = 0; i < n; i++)
    {
        if (min_list[i][0] >= max)
        {
            max = min_list[i][0];
            max_row = min_list[i][1];
            max_col = min_list[i][2];
        }
        if (min_list[i][0] <= min)
        {
            min = min_list[i][0];
            min_row = min_list[i][1];
            min_col = min_list[i][2];
        }
    }
    std::cout << "min=" << min << ",row=" << min_row << ",col=" << min_col << std::endl;
    std::cout << "max=" << max << ",row=" << max_row << ",col=" << max_col << std::endl;
}