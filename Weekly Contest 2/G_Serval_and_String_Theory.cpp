// Problem link: https://vjudge.net/contest/782900#problem/G

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int sz = s.size(); 
        if(sz == 1) 
        {
            cout << "NO" << endl; continue;
        }


        string s_new = s;
        reverse(s_new.begin(), s_new.end()); 

        if(s < s_new)
        {
            cout << "YES" << endl; 
            continue;
        }

        bool ok = false; 
        if (k > 0) 
        {
            for (char c : s) 
            {
                if (c != s[0]) 
                {
                    ok = true;
                    break;
                }
            }
        }

        if(ok) cout << "YES" << endl; 
        else cout << "NO" << endl;   


    }
    
    return 0;
}