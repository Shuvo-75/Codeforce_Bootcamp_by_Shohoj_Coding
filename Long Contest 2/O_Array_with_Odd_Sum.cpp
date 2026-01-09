// Problem link: https://vjudge.net/contest/780069#problem/O

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
        long long sum = 0; 
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
            if(arr[i] % 2 != 0)
            {
                odd++; 
            }else
            {
                even++; 
            }
        }

        if(odd == 0)
        {
            cout << "NO" <<endl; 
        }else
        {
            if(odd % 2 == 1 || even > 0)
            {
                cout << "YES" << endl; 
            }else
            {
                cout << "NO" << endl; 
            }
        }
    }
    
    return 0;
}