//从键盘上输入一个字符串a,并在a串中的最大元素后边插入字符串b（b[ ]=“ab”）。
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b = "ab";
    int i, len, max = 0;
    cin >> a;
    len = a.length();
    for (i = 0; i < len; i++)
        if (a[i] > a[max])
            max = i;
    a.insert(max + 1, b);
    cout << a << endl;
    return 0;
}