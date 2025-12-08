// Problem link: https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int room_count = 0; 
    while (t--)
    {
        int p, q;
        cin >> p >> q; 

        if(p < q && abs(p-q) >= 2)
        {
            room_count++; 
        }
    }

    cout << room_count << endl;
    
    return 0;
}