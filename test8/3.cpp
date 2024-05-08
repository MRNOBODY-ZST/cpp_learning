#include <iostream>
int main()
{
    //求有多少种方法可将1.0元人民币兑换成1分，2分，5分，1角，2角，5角。
    int count = 0, sum = 0, cnt = 0;
    int ii, jj, kk, ll, mm;
    for (int i = 0; i <= 2; i++)
    {
        ii = (100 - i * 50) / 20;
        for (int j = 0; j <= ii; j++)
        {
            jj = (100 - i * 50 - j * 20) / 10;
            for (int k = 0; k <= jj; k++)
            {
                kk = (100 - i * 50 - j * 20 - k * 10) / 5;
                for (int l = 0; l <= kk; l++)
                {
                    ll = (100 - i * 50 - j * 20 - k * 10 - l * 5) / 2;
                    for (int m = 0; m <= ll; m++)
                    {
                        ++cnt;
                        count++;
                    }
                }
            }
        }
    }
    std::cout << count << std::endl;
    std::cout << cnt << std::endl;
}