#include <iostream>

using namespace std;

int main()
{
    int n, q, i, j;
    int a, b;
    int arr[1000000];
    cin >> n;
    cin >> q;
    int k[n+1];
    k[0] = 0;
    for(i=0; i<n; i++)
    {
        cin >> k[i+1];
        k[i+1] += k[i];
        cout << k[i] << endl;
        for(; j<k[i+1]; j++)
        {
            cin >> arr[j];
        }
    }
    for(i=0;i<k[n+1];i++)
    {
        cout << "Hi "<< arr[i] <<endl;
    }
    for(i=0; i<q; i++)
    {
        cin >> a;
        cin >> b;
        cout << arr[k[a]+b] << endl;
    }

    return 0;
}
