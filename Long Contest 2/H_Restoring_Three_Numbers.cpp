// Problem link: https://vjudge.net/contest/780069#problem/H

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> store(4); 

    int max_value = 0; 
    for(int i = 0; i < 4; i++)
    {
        cin >> store[i];
        max_value = max(max_value, store[i]); 
    }

    for(int i = 4-1; i >= 0; i--)
    {
        if(max_value != store[i])
        {
            cout << max_value - store[i] << " "; 
        }
    }

    return 0;
}