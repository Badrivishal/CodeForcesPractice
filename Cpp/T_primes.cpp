#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n, i, j, temp, br_flag;
    cin >> n;
    long long int a[n];
    vector <int> primes;
    for (i = 2; i < 100001; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }

    for (i = 0; i < n; i++)
    {
        br_flag = 0;
        cin >> a[i];
        temp = (int)sqrt(a[i]);
        if (temp * temp == a[i])
        {
            // for (j = 0; j < primes.size() && primes[j] <= temp; j++)
            // {
            //     if (primes[j] == temp)
            //     {
            //         br_flag = 1;
            //         break;
            //     }
            // }
            if (binary_search(primes.begin(), primes.end(), temp))
            {
                br_flag = 1;
                cout << "YES" << endl;
            }
        }
        if (br_flag == 0)
            cout << "NO" << endl;
    }
    return 0;
}
