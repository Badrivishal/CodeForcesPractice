#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int arr[n + 2], ans, max = 0;
        long long int peaks[n + 1];
        long long int sumpeaks[n + 1];
        long long int finalpeaks[n + 1];
        arr[0] = 0; peaks[0] = 0; sumpeaks[0] = 0, finalpeaks[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        arr[n + 1] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
                peaks[i] = 1;
            else
                peaks[i] = 0;
        }
        //		for(int i=n;i>=1;i--)
        //		{
        //			peaks[i]=peaks[i-1];
        //		}
        //		for(int i=1;i<n+1;i++)
        //		{
        //			cout<<peaks[i]<<" ";
        //		}
        //		cout<<endl;
        for (int i = 1; i < n + 1; i++)
        {
            sumpeaks[i] = peaks[i] + sumpeaks[i - 1];
        }
        //	cout<<endl;
    //		for(int i=1;i<n+1;i++)
    //		{
    //			cout<<sumpeaks[i]<<" ";
    //		}
    //		cout<<endl;
        for (int i = k; i < n + 1; i++)
        {
            if (peaks[i - k + 1] == 0 && peaks[i] == 0)
                finalpeaks[i] = sumpeaks[i] - sumpeaks[i - k];
            if (peaks[i - k + 1] == 1 && peaks[i] == 0)
                finalpeaks[i] = sumpeaks[i] - sumpeaks[i - k] - 1;
            if (peaks[i - k + 1] == 0 && peaks[i] == 1)
                finalpeaks[i] = sumpeaks[i] - sumpeaks[i - k] - 1;
            if (peaks[i - k + 1] == 1 && peaks[i] == 1)
            {
                //cout<<"both minus";
                finalpeaks[i] = sumpeaks[i] - sumpeaks[i - k] - 2;
            }

        }
        //		for(int i=1;i<n+1;i++)
        //		{
        //			if(i<k)
        //			cout<<"0"<<" ";
        //			else
        //			cout<<finalpeaks[i]<<" ";
        //		}
        //		cout<<endl;
        for (int i = k; i < n + 1; i++)
        {
            if (finalpeaks[i] > max)
            {
                max = finalpeaks[i];
                ans = i - k + 1;
            }
        }
        if (max != 0)
            cout << max + 1 << " " << ans << endl;
        else
            cout << 1 << " " << 1 << endl;
    }

}