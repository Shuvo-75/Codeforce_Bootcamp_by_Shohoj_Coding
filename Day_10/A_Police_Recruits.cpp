// Problem link: https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x; 
    cin >> x;
    vector<int> store(x); 
    for(int i = 0; i < x; i++)
    {
        cin >> store[i]; 
    }
    int hire_police = 0; 
    int untreated = 0; 

    for(int i = 0; i < x; i++)
    {
        if(store[i] > 0)
        {
            hire_police += store[i]; 
        }else
        {
            if(hire_police > 0)
            {
                hire_police--; 
            }else
            {
                untreated++; 
            }
        }
    }

    cout << untreated << endl; 
    return 0;
}