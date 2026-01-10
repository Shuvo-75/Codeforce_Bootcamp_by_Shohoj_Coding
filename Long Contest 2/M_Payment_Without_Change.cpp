// Problem link: https://vjudge.net/contest/780069#problem/M

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int for_n = s/n; 
        int n_need;
        if(for_n >= a)
        {
            n_need = a * n; 
        }else
        {
            n_need = for_n * n; 
        }

        if(b >= (s-n_need))
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl;     
        }
    }

    return 0;
}