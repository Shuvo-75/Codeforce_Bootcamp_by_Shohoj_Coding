// Problem link: https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y; 
        cin >> x >> y; 

        long long remainder = x % y; 
        if(remainder == 0)
        {
            cout << 0 << endl;
        }else
        {
            cout << (y - remainder) << endl;
        }
        
    }
    
    return 0;
}