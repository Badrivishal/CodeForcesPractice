#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;

int to_num(string a, int i, int j)
{
    int k;
    int num = 0;
    for(k=i;k<j;k++)
    {
        // num.push_back((int)a[k]-48);
        num += ((int)a[k]-48)*pow(10, j-k-1);
    }
    return num;
}

void printString(int n) 
{ 
    char str[100]; // To store result (Excel column name) 
    int i = 0; // To store current index in str which is result 
  
    while (n>0) 
    { 
        // Find remainder 
        int rem = n%26; 
  
        // If remainder is 0, then a 'Z' must be there in output 
        if (rem==0) 
        { 
            str[i++] = 'Z'; 
            n = (n/26)-1; 
        } 
        else // If remainder is non-zero 
        { 
            str[i++] = (rem-1) + 'A'; 
            n = n/26; 
        } 
    } 
    str[i] = '\0'; 
  
    // Reverse the string and print result 
    reverse(str, str + strlen(str)); 
    cout << str; 
  
    return; 
} 

int main() 
{
    int t, i, j, k, flag, num1, num2;
    int typ;
    cin >> t;
    string a;
    for(i=0;i<t;i++)
    {
        typ = 0;
        flag = 0;
        cin >> a;
        // cout << a;
        for(j=0;j<a.size();j++)
        {
            if((int)a[j]>47 && (int)a[j]<58)
            {
                if((int)a[j+1]>64 && (int)a[j+1]<91)
                {
                    typ = 1;
                }
            }
        }
        num1 = 0;
        num2 = 0;
        if(typ==1)
        {
            for(j=0;j<a.size();j++)
            {
                if(a[j] == 'C')
                {
                    break;
                }
            }
            num1 = to_num(a, 1, j);
            num2 = to_num(a, j+1, a.size());
            // cout << num1 << ' ' << num2 << endl;
            // j = 0;
            // while(pow(26, j)<num2)
            // {
            //     j++;
            // }
            // j--;
            // // cout << "Hi " << j << endl;
            // while(j>=0)
            // {
                
            //     num2-=j;
            //     int temp = num2/(pow(26, j));
            //     // cout << temp << endl;
                
            //     cout << (char)(temp+64);
            //     // cout << temp;
            //     num2+=j;
            //     num2 -= temp*(pow(26, j));
            //     j--;
            // }
            char out1[100];
            j = 0;
            // while(num2>0)
            // {
            //     out1[j] = (char)(((num2-1)%26)+65);
            //     j++;
            //     num2 = num2/26;
            // }
            // out1[j] = '\0';
            // cout << out1;
            printString(num2);
            cout << num1 << endl;
        }
        // cout << typ << endl;
        // cout << num1 << ' ' << num2 << endl;
        else
        {
            for(j=0;j<a.size();j++)
            {
                if((int)a[j]>47 && (int)a[j]<58)
                {
                    break;
                }
            }
            num2 = to_num(a, j, a.size());
            for(k=0;k<j;k++)
            {
                num1 += ((int)a[k]-64)*pow(26, j-k-1); 
                // cout << num1 << endl;
                // cout << (int)a[k] << " " << j-k << endl;
            }
            cout << 'R' << num2 << 'C' << num1<< endl;
        }


    }
    return 0;
}