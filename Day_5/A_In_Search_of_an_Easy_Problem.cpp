// Problem link: https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    bool hard = false;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            hard = true;
        }
    }

    if(hard)
    {
        cout << "HARD" << endl;
    }else
    {
        cout << "EASY" << endl;
    }
    
    return 0;
}