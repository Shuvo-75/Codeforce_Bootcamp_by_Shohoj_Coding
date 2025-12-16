// Problem link: https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string guest, host, mix_up; 

    cin >> guest; 
    cin >> host; 
    cin >> mix_up; 

    vector<char> store; 

    store.insert(store.end(), guest.begin(), guest.end());
    store.insert(store.end(), host.begin(), host.end());

    // for(int i = 0; i < guest.size(); i++)
    // {
    //     store.push_back(guest[i]); 
    // }

    // for(int i = 0; i < host.size(); i++)
    // {
    //     store.push_back(host[i]); 
    // }

    vector<char> combine_store; 
    for(auto &c : mix_up)
    {
        combine_store.push_back(c); 
    }
    sort(store.begin(), store.end()); 
    sort(combine_store.begin(), combine_store.end()); 

    if(store == combine_store)
    {
        cout << "YES" << endl; 
    }else
    {
        cout << "NO" << endl; 
    }
    return 0;
}