#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

long long int sum_nn(long long int a)
{
	return a * (a + 1) / 2;
}



int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		long long int a, b, diff, sol;
		cin >> a >> b;
		diff = abs(a - b);
		sol = pow((1 + 8 * diff), 0.5) - 1;
		sol = (long long int)floor(sol / 2);
		// cout << "init: " << sol << endl;
		while (sum_nn(sol) < diff)
		{
			sol++;
		}
		// cout << sol << " " << sum_nn(sol) << " " << diff << endl;
		while ((sum_nn(sol) - diff) % 2 == 1)
		{
			// cout << "Hii " << sol << " " << diff << " " << (sum_nn(sol) - diff) << endl;
			sol++;
		}
		cout << sol << endl;
	}
	return 0;
}