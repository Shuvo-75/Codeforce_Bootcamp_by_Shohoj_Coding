// Problem link: https://codeforces.com/problemset/problem/1896/A

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

        vector<int> arr(x); 
        for(int i = 0; i < x; i++)
        {
            cin >> arr[i]; 
        }
        
        if(arr[0] == 1)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }

    return 0;
}