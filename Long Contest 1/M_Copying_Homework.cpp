// Problem link: https://vjudge.net/contest/777903#problem/M

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n); 

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    reverse(arr.begin(), arr.end()); 

    for(int c : arr)
    {
        cout << c << " "; 
    }
    return 0;
}