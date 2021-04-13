#include <iostream>
using namespace std;

int main() 
{
    int n,i,a,sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    cin >> n;
    for(i=0;i<n*3;i++)
    {
        if(i%3==0)
        {
            cin >> a;
            sum1 = sum1 + a;
        }
        else if (i%3==1)
        {
            cin >> a;
            sum2 = sum2 + a;
        }
        else if (i%3==2)
        {
            cin >> a;
            sum3 = sum3 + a;
        }
    }
    if(sum1 == 0&&sum2==0&&sum3==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}