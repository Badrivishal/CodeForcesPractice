#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
    int flag = 0;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    int x3, y3, x4, y4;

    if(x1 == x2)
    {
        x3 = x4 = (x1 + (y2 - y1));
        y3 = y1;
        y4 = y2;
    }
    else if(y1 == y2)
    {
        y3 = y4 = (y1 + (x2 - x1));
        x3 = x1;
        x4 = x2;
    }
    else if(abs(x2-x1) == abs(y2-y1))
    {
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;
    }
    else
    {
        flag = 1;
    }
    
    if(flag == 0)
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    else if(flag == 1)
        cout << -1 << endl; 



    return 0;
}