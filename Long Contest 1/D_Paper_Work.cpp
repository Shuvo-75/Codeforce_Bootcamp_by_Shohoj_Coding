// Problem link: https://vjudge.net/contest/777903#problem/D

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0; 
    int negative_value = 0; 
    int divide = 0; 
    vector<int> new_store; 
    while (n--)
    {
        int x; 
        cin >> x;

        if(x >= 0)
        {
            count++; 
        }else
        {
            if(negative_value < 2)
            {
                count++; 
                negative_value++; 
            }else
            {
                new_store.push_back(count); 
                count = 1; 
                negative_value = 1; 
                divide++; 
            }
        }
    }

    if (count > 0) 
    {
        new_store.push_back(count);
        divide++; 
    }

    cout << divide << endl; 

    for(int c : new_store)
    {
        cout << c << " "; 
    }
    
    return 0;
}