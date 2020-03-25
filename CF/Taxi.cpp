// #include <iostream>
// #include <string>
// #include <vector>
// #include<algorithm>
// #include <bits/stdc++.h> 
// #include <iomanip>
// #include <math.h>

// using namespace std;


// int main()
// {
//     int n, temp, four, three, two, one, i, count;
//     cin >> n;
//     four = three = two = one = count = 0;
//     for ( i = 0; i < n; i++)
//     {
//         cin >> temp;
//         if(temp == 4)
//         {
//             four++;
//         }
//         else if (temp == 3)
//         {
//             three++;
//         }
//         else if (temp == 2)
//         {
//             two++;
//         }        
//         else if (temp == 1)
//         {
//             one++;
//         }
//     }
    
//     count += four;
        
//     count += three;         // All threes will get a cab also they can fit same number of ones
//     one -= three;           // Dont care about one going to negative

//     count += ceil((float)two/2);
//     if(two%2 == 1 && one>0)
//     {
//         one-=2;
//     }
        
//     if(one>0)
//     {
//         count += ceil((float)one/4);
//     }
//     cout << count << endl;


//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int arr[5];

int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr[a]++;
	}
	int count=arr[4];
	if(arr[3]>=arr[1])
    {
        count=count+arr[3]+ceil(arr[2]/2);
    }
    else
    {
        count=count+arr[2]/2+arr[3];
        arr[1]=arr[1]-arr[3];
        arr[2]=arr[2]%2;
        if(arr[2]=1)
        {
            arr[1]=arr[1]-2;
            count=count+ceil(arr[1]/4)+1;
        }
        else
        count=count+ceil(arr[1]/4);
    }
    cout<<count;   

}