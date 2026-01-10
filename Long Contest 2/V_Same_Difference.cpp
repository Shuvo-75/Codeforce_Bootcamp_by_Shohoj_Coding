// Problem link: https://vjudge.net/contest/780069#problem/V

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string s;
        cin >> x >> s; 
        
        string store; 
        int count = 0; 
        for(int i = 0; i < x; i++)
        {
            for(int j = x-1; j >= 0; j--)
            {
                if(i < j && s[i] > s[j])
                {
                    swap(s[i], s[j]);
                    count++;  
                }
            }
        }

        cout << count << endl; 
    }
    
    return 0;
}


// can't solve this 