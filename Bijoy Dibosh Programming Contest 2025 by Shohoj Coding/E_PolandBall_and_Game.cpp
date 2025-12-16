// Problem link: https://vjudge.net/contest/775130#problem/E

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> n >> m; 
    unordered_set<string> poland_words;
    for(int i = 0; i < n; i++)
    {
        string s; 
        cin >> s; 
        poland_words.insert(s); 
    }

    int both_have = 0; 
    for(int i = 0; i < m; i++)
    {
        string s; 
        cin >> s; 

        if(poland_words.count(s))
        {
            both_have++; 
        }
    }

    if(both_have % 2 != 0)
    {
        if(n >= m)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
    }else
    {
        if(n > m)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
    }
    return 0;
}