// Problem link: https://vjudge.net/contest/780069#problem/L

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

        bool same_team = true; 
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(abs(arr[i]-arr[j]) == 1)
                {
                    same_team = false; 
                    break;
                }
            }
            if(!same_team) break;
        }

        cout << (same_team ? 1 : 2) << endl;

    }
    
    return 0;
}