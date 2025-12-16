// Problem link: https://codeforces.com/problemset/problem/1619/A

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
        bool find = false; 
        if(s.size() % 2 == 0)
        {
            string s1, s2;
            int size = s.size();
            int i = 1;   
            for(auto &c : s)
            {
                if(i <= size/2)
                {
                    s1.push_back(c); 
                }else
                {
                    s2.push_back(c); 
                }

                i++; 
            }
            if(s1 == s2)
            {
                find = true; 
            }
        }

        if(find)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}