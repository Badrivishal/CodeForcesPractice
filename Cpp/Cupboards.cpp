#include <iostream>
using namespace std;

int main()
{
    int a, i, left, right, out, temp1;
    left = right = out = 0;
    cin >>a;
    for(i=0;i<a;i++)
    {
        cin >> temp1;
        left += temp1;
        cin >> temp1;
        right += temp1;
    }
    if(left <= a/2)
    {
        out += left;
    }
    else
    {
        out += a-left;
    }
    if(right <= a/2)
    {
        out += right;
    }
    else
    {
        out += a-right;
    }
    cout << out << endl;
    return 0;
}