#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; 

    vector<int> arr(26, 0);

    sort(s.begin(), s.end());

    for(auto c : s)
    {
        int value = c - 'a';
        arr[value] = 1;
    }

    int count = 0;
    for(int x : arr)
    {
        if(x == 1) count++; 
    }

    if(count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}