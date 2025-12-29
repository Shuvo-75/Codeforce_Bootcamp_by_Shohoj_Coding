// Problem link: https://codeforces.com/problemset/problem/2172/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr(3); 
    int min_value = INT_MAX; 
    int max_value = INT_MIN; 
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i]; 
        min_value = min(min_value, arr[i]); 
        max_value = max(max_value, arr[i]); 
    }

    sort(arr.begin(), arr.end(), greater<int>()); 

    int diff = abs(max_value - min_value); 
    if(diff >= 10)
    {
        cout << "check again" << endl; 
    }else
    {
        cout << "final " << arr[1]; 
    }
    return 0;
}