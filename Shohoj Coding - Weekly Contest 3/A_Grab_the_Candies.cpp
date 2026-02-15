// Problem link: https://vjudge.net/contest/785491#problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int even = 0, odd = 0; 
        for(int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            if(a % 2 == 0)
            {
                even += a;
            }else
            {
                odd += a;
            }
        }


        if(even > odd)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}