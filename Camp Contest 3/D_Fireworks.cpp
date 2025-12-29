// Problem link: https://vjudge.net/contest/777411#problem/D

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        cout << (c/a) + (c/b) + 2 << endl; 
    }
    
    return 0;
}