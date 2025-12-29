// Problem link: https://vjudge.net/contest/777411#problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n); 

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }

        bool find = true; 
        
        set<int> booked; 
        for(int i = 0; i < n; i++)
        {
            int seat = arr[i];
            if(i > 0)
            {
                if(booked.count(seat - 1) == 0 && booked.count(seat + 1) == 0)
                {
                    find = false; 
                    break;; 
                }
            } 

            booked.insert(seat); 
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