#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; 
    vector<char> store;
    vector<char> new_store;
    for(auto &c : s)
    {
        if(c == '+')
        {
            continue;
        }else
        {
            store.push_back(c);
        }
    }

    sort(store.begin(), store.end());
    int size_for_sign = store.size();
    for(auto &c : store)
    {
        new_store.push_back(c);
        size_for_sign--; 
        if(size_for_sign > 0)
        {
            new_store.push_back('+');
        }
        
    }

    for(auto &c : new_store)
    {
        cout << c;
    }
    return 0;
}