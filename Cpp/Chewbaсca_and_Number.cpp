#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int i, temp;
	string s;
	cin >> s;
	for (i = 0; i < s.length(); i++)
	{
		if (i == 0)
		{
			if (s[i] != '9')
			{
				if (s[i] >= '5')
				{
					temp = s[i] - '0';
					temp = 9 - temp;
					s[i] = (char)(temp + '0');
				}
			}
		}
		else
		{
			if (s[i] >= '5')
			{
				temp = s[i] - '0';
				temp = 9 - temp;
				s[i] = (char)(temp + '0');
			}
		}
	}
	cout << s << endl;
	return 0;
}