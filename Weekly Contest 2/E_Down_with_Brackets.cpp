// Problem link: https://vjudge.net/contest/782900#problem/E

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
        int length = s.size(); 
        int count = 0; 
        bool found = false; 
        for(int i = 0; i < length; i++)
        {
            if(s[i] == '(')
            {
                count++; 
            }else
            {
                count--; 
            }

            if(count == 0 && i != length-1)
            {
                found = true; 
                break;
            }
        }

        if(found)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}