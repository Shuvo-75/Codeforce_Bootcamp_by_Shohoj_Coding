// Problem link: https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> arr(x); 

    for(int i = 0; i < x; i++)
    {
        cin >> arr[i]; 
    }
    sort(arr.begin(), arr.end());

    int sum = 0; 
    for(int i = 0; i < y; i++)
    {
        if(arr[i] < 0)
        {
            sum += -arr[i]; 
        }else
        {
            break;
        }
    }

    cout << sum << endl; 
    return 0;
}