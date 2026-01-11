// Problem link: https://vjudge.net/contest/780069#problem/X

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
        long long slice = 0; 
        while (x >= 3)
        {
            x/= 3; 
            slice += x; 
        }

        cout << slice << endl;
        
    }
    
    return 0;
}