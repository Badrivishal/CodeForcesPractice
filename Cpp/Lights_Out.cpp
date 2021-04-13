#include <iostream>
#include <string>
#include <vector>
using namespace std;

void flip(bool gr[5][5], int a,int b)
{
    int i,j;
    for(i=a-1;i<a+2;i++)
    {
        for(j=b-1;j<b+2;j++)
        {
            if(i==a||j==b)
                gr[i][j]=not(gr[i][j]);
        }
    }
}

int main() 
{
    bool grid[5][5] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int i,j,k;
    int n;
    // for(i=1;i<4;i++)
    // {
    //     for(j=1;j<4;j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            cin >> n;
            if (n%2!=0)
                flip(grid,i,j);
        }
    }
    
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
    return 0;
}