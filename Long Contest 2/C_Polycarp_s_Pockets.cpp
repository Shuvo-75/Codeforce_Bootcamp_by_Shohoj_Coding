// Problem link: https://vjudge.net/contest/780069#problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    vector<int> coin(n); 

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i]; 
    }

    unordered_map<int, int> store; 

    for(int c : coin)
    {
        store[c]++; 
    }

    int pocket = 1; 
    for(auto c : store)
    {
        pocket = max(c.second, pocket); 
    }

    cout << pocket << endl; 
    
    return 0;
}