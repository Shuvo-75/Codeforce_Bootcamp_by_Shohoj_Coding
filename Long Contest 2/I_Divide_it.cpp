// Problem link: https://vjudge.net/contest/780069#problem/I

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

        long long for_2 = 0, for_3 = 0, for_5 = 0;

        while (x%2 == 0)
        {
            x /= 2; 
            for_2++; 
        }

        while (x%3 == 0)
        {
            x /= 3; 
            for_3++; 
        }

        while (x%5 == 0)
        {
            x/= 5; 
            for_5++; 
        }

        if(x != 1)
            cout << "-1" << endl; 
        else
            cout << for_2 + 2 * for_3 + 3 * for_5 << endl; 
         
    }
    
    return 0;
}