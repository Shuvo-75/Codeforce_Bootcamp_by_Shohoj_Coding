// Problem link: https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long val;
    cin >> val;

    string s = to_string(val);

    int lucky_count = 0; 
    for(auto &c : s)
    {
        if(c == '4' || c == '7')
        {
            lucky_count++; 
        }
    }
    
    if(lucky_count == 4 || lucky_count == 7)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}