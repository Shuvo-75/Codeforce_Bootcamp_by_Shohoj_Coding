// Problem link: https://vjudge.net/contest/777903#problem/AU

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    vector<int> stock(n);
    for(int i = 0; i < n; i++)
    {
        cin >> stock[i]; 
    }

    vector<int> new_stock(stock.begin(), stock.end()); 
    
    sort(new_stock.begin(), new_stock.end()); 

    new_stock.erase(unique(new_stock.begin(), new_stock.end()), new_stock.end());
    
    int divisable_value = -1; 
 
    for(int c : new_stock)
    {
        bool find = false; 
        for(int s : stock)
        {
            if(s % c != 0)
            {
                find = true; 
                break;
            }
        }

        if(!find)
        {
            divisable_value = c; 
            break;
        }
    }

    cout << divisable_value << endl; 
    return 0;
}