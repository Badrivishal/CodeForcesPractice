#include <iostream>
using namespace std;

int main() 
{
    int n,i;
    n=25;
    int a;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(a==1)
        {
            break;
        }
    }
    int row = i/5;
    int col = i%5;
    int res = abs(row-2)+abs(col-2);
    cout << res << endl;
    return 0;
}