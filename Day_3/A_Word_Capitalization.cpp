#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(auto &c : s)
    {
        if(s[0] >= 'a' && s[0] <= 'z')
        {
            c = toupper(c);
        }

        cout << c; 
    }
    return 0;
}