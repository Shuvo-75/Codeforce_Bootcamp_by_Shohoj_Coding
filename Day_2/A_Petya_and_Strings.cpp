#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1; 
    cin >> s; 
    cin >> s1; 

    for(auto &c : s1) 
        c = tolower(c);

    for(auto &c : s)
        c = tolower(c);

    if(s < s1)
        cout << -1 << endl;
    else if(s == s1)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}