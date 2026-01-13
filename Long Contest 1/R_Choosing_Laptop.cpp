// Problem link: https://vjudge.net/contest/777903#problem/R

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; 

    int max_value = 0; 
    int pos = 0; 
    for(int i = 0; i < t; i++)
    {
        int speed, ram, hdd, cost;
        cin >> speed >> ram >> hdd >> cost; 
        if((speed < 1000 && speed > 4200) || (ram < 256 && ram > 4096) || (hdd < 1 && hdd > 500) || (cost < 100 && cost > 1000))
        {
            continue;
        }else
        {
            int new_total = speed + ram + hdd + cost; 
            if(new_total > max_value)
            {
                pos = i; 
            }
        }
    }

    cout << pos << endl; 
    
    return 0;
}