// Problem link: https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string new_s; 
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.')
        {
            new_s.push_back('0'); 
        }
        if(s[i] == '-')
        {
            if(s[i+1] == '.')
            {
                new_s.push_back('1'); 
            }else if(s[i + 1] == '-')
            {
                new_s.push_back('2'); 
            }
            i++; 
        }
    }
    cout << new_s << endl; 
    return 0;
}