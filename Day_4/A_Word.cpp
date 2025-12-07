#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int lower = 0, upper = 0; 

    for(auto c : s)
    {
        if(c >= 'a' && c <= 'z')
        {
            lower++; 
        }else
        {
            upper++; 
        }
    }

    if(upper <= lower)
    {
        for(auto &c : s)
        {
            c = tolower(c);
        }
    }else
    {
        for(auto &c : s)
        {
            c = toupper(c);
        }
    }

    cout << s << endl;
    return 0;
}