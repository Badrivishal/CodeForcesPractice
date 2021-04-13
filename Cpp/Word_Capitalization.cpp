#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string a("A");
    cin >> a;
    if(int(a[0])>=65&&a[0]<=90)
    {
        cout << a << endl;
    }
    else if(int(a[0])>=97&&a[0]<=122)
    {
        a[0]-=(97-65);
        cout << a << endl;
    }
    return 0;
}