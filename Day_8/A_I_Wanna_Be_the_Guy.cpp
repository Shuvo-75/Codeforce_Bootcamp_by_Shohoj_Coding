// Problem link: https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int p; 
    cin >> p; 
    vector<int> arr(p); 
    for(int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    int q; 
    cin >> q; 
    vector<int> new_arr(q);
    for(int i = 0; i < q; i++)
    {
        cin >> new_arr[i];
    }

    set<int> store;  

    vector<int> merge = arr; 
    merge.insert(merge.end(), new_arr.begin(), new_arr.end());

    for(int c : merge)
    {
        store.insert(c);
    }

    if(store.size() == t)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}