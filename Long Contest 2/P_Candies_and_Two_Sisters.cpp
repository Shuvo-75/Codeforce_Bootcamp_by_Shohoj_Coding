// Problem link: https://vjudge.net/contest/780069#problem/P

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x; 

        if(x % 2 == 0)
        {
            cout << (x-1)/2 << endl; 
        }else
        {
            cout << x/2 << endl; 
        }
    }
    
    return 0;
}