// Problem link: https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s; 
    cin >> s;

    set<char> st; 

    for(auto &c : s)
    {
        st.insert(tolower(c));
    }

    if(st.size() == 26)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}