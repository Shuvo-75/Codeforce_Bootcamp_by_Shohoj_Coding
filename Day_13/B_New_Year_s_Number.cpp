// Problem link: https://codeforces.com/problemset/problem/1475/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase; 
    cin >> testcase;
    while (testcase--)
    {
        int t;
        cin >> t;
        if(t >= 2020)
        {
            int count = t/2020;
            int remainder = t % 2020; 
            if(count >= remainder)
            {
                cout << "YES" << endl; 
            }else
            {
                cout << "NO" << endl; 
            }
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}