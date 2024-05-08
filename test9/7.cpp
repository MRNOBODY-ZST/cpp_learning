#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tmp = 0;
    vector <int> a;
    for(int i = 0; i < 10; i++)
    {
        cin>>tmp;
        a.push_back(tmp);
    }
    int n = 0;
    cin>>n;
    tmp = (int)(n/3)-1;
    for(int i = (int)(n/3)-1; i <= (int)(n/2)-1; i++)
    {
        a.erase(a.begin() + tmp);
    }
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
}