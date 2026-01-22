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

        string s_new = s;
        reverse(s_new.begin(), s_new.end()); 
        int mismatch_count = 0;
        for(int i = 0; i < n/2; i++) 
        {
            if(s[i] > s[n-1-i]) {
                mismatch_count++;
            }
        }

        if(mismatch_count <= k)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl;    
        }




    }
    
    return 0;
}