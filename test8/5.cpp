#include <iostream>
#include <string>
using namespace std;
int main()
{
    void number_print(int n, int max_num);
    int n = 0;
    cin >> n;
    int max_lenth = to_string(n).length();
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            for (int k = 0; k < max_lenth + 1; ++k)
                cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            number_print(j, n);
        }
        for (int j = i - 1; j > 0; --j)
        {
            number_print(j, n);
        }
        cout << endl;
    }
}
void number_print(int n, int max_num)
{
    int max_lenth = to_string(max_num).length();
    int num_lenth = to_string(n).length();
    for (int i = 0; i < max_lenth - num_lenth + 1; ++i)
    {
        cout << " ";
    }
    cout << n;
}