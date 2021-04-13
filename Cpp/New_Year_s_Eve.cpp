#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

bool isPowerOfTwo(unsigned long long int x)
{
	return x && (!(x & (x - 1)));
}

unsigned long long int nextPowerOf2(unsigned long long int n)
{
    unsigned long long count = 0;

    // First n in the below condition  
    // is for the case where n is 0  
    if (n && !(n & (n - 1)))
        return n;

    while (n != 0)
    {
        n >>= 1;
        count += 1;
    }

    return (unsigned long long int)1 << count;
}

int main()
{
	unsigned long long int n, k, out;
	cin >> n >> k;
	/*unsigned long long int pow1 = ceil(log(n) / log(2))*/
	out = nextPowerOf2(n);
	if (isPowerOfTwo(n))
		out *= 2;
	if (k > 1)
		cout << out-1 << endl;
	else
		cout << n << endl;
	return 0;
}