// Problem link: https://vjudge.net/contest/780069#problem/K

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(t); 
    int even = 0, odd = 0; 
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i]; 
        if(arr[i] % 2 == 0)
        {
            even++; 
        }else
        {
            odd++; 
        }
    }

    cout << min(even, odd) << endl; 
    return 0;
} 