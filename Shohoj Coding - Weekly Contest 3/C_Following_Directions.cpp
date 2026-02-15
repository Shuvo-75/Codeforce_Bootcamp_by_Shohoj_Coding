// Problem link: https://vjudge.net/contest/785491#problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool done = false; 
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x_axis = 0, y_axis = 0; 
        for(char c : s)
        {
            if(c == 'U')
            {
                y_axis++; 
            }else if(c == 'D')
            {
                y_axis--; 
            }else if(c == 'R')
            {
                x_axis++; 
            }else if(c == 'L')
            {
                x_axis--; 
            }

            if(x_axis == y_axis && x_axis == 1 && y_axis == 1)
            {
                done = true; 
                break;
            }
        }
        if(done)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}