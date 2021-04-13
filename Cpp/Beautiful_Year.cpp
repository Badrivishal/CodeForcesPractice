#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int i,dig1,dig10,dig100,dig1000;
    for (i=n+1;i<90000;i++)
    {
        dig1 = i%10;
        dig10 = (i/10)%10;
        dig100 = (i/100)%10;
        dig1000 = (i/1000);
        if(dig1!=dig10 && dig1!=dig100 && dig1!=dig1000 && dig10!=dig100 && dig10!=dig1000 && dig100!= dig1000)
        {
            break;
        }
    }
    cout << i << endl;
    return 0;
}