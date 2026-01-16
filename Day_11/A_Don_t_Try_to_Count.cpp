// Problem link: https://codeforces.com/problemset/problem/1881/A
// tle problem 
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string temp = x;
        int operations = 0;
        bool found = false;

        while (operations <= 5) 
        {
            if (temp.find(s) != string::npos) 
            {
                cout << operations << endl;
                found = true;
                break;
            }
            temp += temp;
            operations++;
        }

        if (!found) cout << -1 << endl;
    }
    return 0;
}
