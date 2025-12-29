// Problem link: https://vjudge.net/contest/777411#problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s(n); 
        int temp = 0, count = 0; 
        bool find = false; 
        for(int i = 0; i < n; i++)
        {
            cin >> s[i]; 
            temp += s[i].size(); 
            if(temp <= m && !find)
            {
                count++;  
            }else
            {
                find = true; 
            }
        }

        cout << count << endl; 
        
    }
    
    return 0;
}