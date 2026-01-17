// Problem link: https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>

using namespace std;
void check(long long x)
{
    if(x > 1)
    {
        if(x & (x-1))
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x; 
        cin >> x; 
        check(x); 
    }
    
    return 0;
}