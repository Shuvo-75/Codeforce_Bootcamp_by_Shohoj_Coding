// Problem link: https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr(4);
    set<int> new_arr; 
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        new_arr.insert(arr[i]);
    }

    cout << 4 - new_arr.size() << endl;
    return 0;
}