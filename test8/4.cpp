#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n = 11;
    for (int i = 0; i < n; ++i)
    {
        if (i < n / 2)
        {
            for (int j = 0; j < n / 2 - i; ++j)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; ++j)
            {
                cout << "*";
            }
            for (int j = 0; j < n - 2 * (i + 1); ++j)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
        else if (i > n / 2)
        {
            for (int j = 0; j < abs(n / 2 - i); ++j)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; ++j)
            {
                cout << "*";
            }
            for(int j = 0;j<n-2*(n-i);++j)
            {
                cout<<" ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < 2 * n - 1; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}