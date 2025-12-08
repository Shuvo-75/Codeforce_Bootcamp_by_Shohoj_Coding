// Problem link: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool find = false;
    while (!find)
    {
        n += 1;
        int x = n;
        set<int> new_set; 
        while (x > 0)
        {
            new_set.insert(x%10);
            x/=10; 
        }
        if(new_set.size() == 4)
        {
            find = true;
            break;
        }
    }

    cout << n << endl;
    
    return 0;
}