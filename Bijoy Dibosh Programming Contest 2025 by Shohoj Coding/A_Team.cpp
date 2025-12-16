// Problem link: https://vjudge.net/contest/775130#problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; 

    int count = 0; 
    for(int j = 0; j < t; j++)
    {
        int team = 0; 
        vector<int> arr(3); 
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i]; 
            if(arr[i] == 1)
            {
                team++; 
            }
        }
        if(team >= 2)
        {
            count++; 
            team = 0; 
        }
    }
    cout << count << endl; 
    return 0;
}