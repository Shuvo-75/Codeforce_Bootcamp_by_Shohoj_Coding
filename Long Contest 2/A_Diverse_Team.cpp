// Problem link: https://vjudge.net/contest/780069#problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k; 
    vector<int> arr(n); 

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    unordered_map<int, int> first_index; 
    vector<int> unique_value; 

    for(int i = 0; i < n; i++)
    {
        if(first_index.find(arr[i]) == first_index.end())
        {
            first_index[arr[i]] = i; 
            unique_value.push_back(arr[i]); 
        }
    }

    if(k <= unique_value.size())
    {
        cout << "YES" << endl; 
        for (int i = 0; i < k; i++)
        {
            cout << first_index[unique_value[i]] + 1 << " "; 
        }
        
    }else
    {
        cout << "NO" << endl; 
    }

    return 0;
}