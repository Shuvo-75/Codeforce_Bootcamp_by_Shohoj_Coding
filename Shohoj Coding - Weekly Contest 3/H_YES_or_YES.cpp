// Problem link: https://vjudge.net/contest/785491#problem/H

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
 
        for(auto &c : s)
        {
            c = tolower(c);
        }
 
        if(s == "yes")
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}