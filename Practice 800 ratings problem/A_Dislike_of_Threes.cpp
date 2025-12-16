// Problem link: https://codeforces.com/problemset/problem/1560/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x; 

        int i = 0; 
        int k_th_element = 0; 
        while(x > 0)
        {
            if(i % 3 != 0 && i % 10 != 3)
            {
                x--; 
                k_th_element = i; 
            }
            i++; 
        }
        cout << k_th_element << endl; 
    }
    
    return 0;
}