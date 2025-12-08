// Problem link: https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int width = 0; 
    while (n--)
    {
        int x;
        cin >> x;
        while (x > 0)
        {
            width++; 
            x -= h; 
        }  
    }
    cout << width << endl;
    
    return 0;
}