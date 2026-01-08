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

    // for(int i = 0; i < n; i++)
    // {
    //     int value = arr[i]; 

    //     if(arr)
    // }

    // map<int, int> store; 
    map<int, bool> store;  

    for(int c : arr)
    {
        store[c] = true;
    }

    vector<int> new_store; 
    for(int i = 0; i < n; i++)
    {
        int value = arr[i]; 
        
        if(store.find(value) == store.end())
        {
            new_store.push_back(value); 
        }
    }

    int size = new_store.size(); 
    if(size == k)
    {
        cout << "Yes" << endl; 
        for(int c : new_store)
        {
            cout << c << " "; 
        }
    }else
        cout << "No" << endl; 
    return 0;
}