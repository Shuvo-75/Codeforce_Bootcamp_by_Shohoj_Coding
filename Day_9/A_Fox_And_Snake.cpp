// Problem link: https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for(int i = 1; i <= a; i++)
    {
        if(i%2 != 0)
        {
            for(int j = 1; j <= b; j++)
            {
                cout << "#"; 
            }
            cout << endl; 
        }else
        {
            if((i / 2) % 2 != 0)
            {
                for(int m = 1; m < b; m++)
                {
                    cout << "."; 
                }
                cout << "#"; 
            }else
            {
                cout << "#"; 
                for(int m = 1; m < b; m++)
                {
                    cout << "."; 
                }
            }
            cout << endl; 
        }
    }
    return 0;
}