// Problem link: https://vjudge.net/contest/780069#problem/N

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, coin;
        cin >> a >> b >> c >> coin; 

        int max_value = max(max(a,b), c); 
        int need = 0; 
        if(a == max_value)
        {
            need = (max_value - b) + (max_value - c); 
        }else if(b == max_value)
        {
            need = (max_value - a) + (max_value - c); 
        }else
        {
            need = (max_value - a) + (max_value - b); 
        }

        bool possible = false; 
        if(need <= coin)
        {
            if(need == coin)
            {
                possible = true; 
            }else
            {
                int check = (coin - need) % 3; 
                if(check == 0)
                {
                    possible = true; 
                }
            }
        }
        
        if(possible)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}