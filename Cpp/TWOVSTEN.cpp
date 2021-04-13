#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int l,run,j,k;
        int max=0, sum;
        cin >> l;
        cin >> run;
        int num[l] ={0};
        for(j=0;j<l;j++)
        {
            cin >> num[j];
        }
        for(j=0;j<l-run;j++)
        {
            sum =0;
            for(k=0;k<run;k++)
            {
                sum += num[j+k];
            }
            if(sum>max)
            {
                max = sum;
            }
        }
        cout<< max<< endl;
    }
    return 0;
}