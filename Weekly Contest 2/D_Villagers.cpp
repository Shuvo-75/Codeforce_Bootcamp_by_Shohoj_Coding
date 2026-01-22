// Problem link: https://vjudge.net/contest/782900#problem/D

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> arr(x); 
        for(int i = 0; i < x; i++)
        {
            cin >> arr[i]; 
        }
        sort(arr.begin(), arr.end(), greater<int>()); 
        int current_pos = arr[0]; 
        long long sum = 0;
        for (int i = 1; i < x; i++)
        {
            sum += max(current_pos, arr[i]); 
            long long min_value = min(current_pos, arr[i]); 
            long long max_value = max(current_pos, arr[i]); 
            current_pos = max_value - min_value; 
        }

        cout << sum << endl; 
    }
    
    return 0;
}


