// Problem link: https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s); 
    set<char> store_string; 
    for(auto &c : s)
    {
        if(isalpha(c))
        {
            store_string.insert(c); 
        }
    }

    cout << store_string.size() << endl; 
    return 0;
}