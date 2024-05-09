//任给一个字符串，从该串中删除指定的字符后输出。
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    int i, len,j = 0;
    getline(cin, a);
    cin >> b;
    len = a.length();
    for (i = 0; i < len; i++)
        if (a[i] != b[j])
        {
            cout << a[i];
        }
        else
        {
            j++;
        }
    cout << endl;
    return 0;
}