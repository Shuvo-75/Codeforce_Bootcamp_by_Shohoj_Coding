// Problem link: https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int d = 0, a = 0;
    for(auto &c : s)
    {
        if(c == 'D')
            d++; 
        else
            a++; 
    }

    if(d == a)
    {
        cout << "Friendship" << endl;
    }else 
    {
        if(d > a)
        {
            cout << "Danik" << endl;
        }else
        {
            cout << "Anton" << endl;
        }
    }
    return 0;
}