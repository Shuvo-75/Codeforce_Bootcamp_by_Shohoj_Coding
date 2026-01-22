// Problem link: https://vjudge.net/contest/782900#problem/F
// test
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
        set<int> s; 
        for(int i = 0; i < x; i++)
        {
            int n;
            cin >> n;
            s.insert(n); 
        }
        cout << s.size() << endl; 
        // vector<int> store(s.begin(), s.end()); 

        // if(store.size() <= 2) 
        // {
        //     if(store.size() >= 2)
        //     {
        //         cout << max(store[0], store[1]) << endl; 
        //     }else
        //     {
        //         cout << store[0] << endl; 
        //     }
        //     continue;
        // }

        // int min_sum = INT_MAX; 
        // for(int i = 0; i < store.size() - 1; i++)
        // {
        //     for (int j = i + 1; j < store.size(); j++)
        //     {
        //         min_sum = min(min_sum, store[i] + store[j]); 
        //     }   
        // }

        // cout << min_sum << endl; 
    }
    
    return 0;
}