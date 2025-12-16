// Problem link: https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(t); 
    int max_store = 0; 
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i]; 
        max_store = max(max_store, arr[i]); 
    }

    int sum = 0; 
    for(int i = 0; i < t; i++)
    {
        sum += max_store - arr[i]; 
    }

    cout << sum << endl; 
    return 0;
}