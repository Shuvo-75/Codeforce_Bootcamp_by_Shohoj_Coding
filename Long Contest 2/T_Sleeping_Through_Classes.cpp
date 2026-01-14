// Problem link: https://vjudge.net/contest/780069#problem/T

#include <bits/stdc++.h>

using namespace std;

int sleeping_count(string s, int k, int n)
{
    int awake = -1, sleep = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            awake = max(awake, i + k);
        }

        if (i > awake)
        {
            sleep++;
        }
    }

    return sleep; 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sleep = sleeping_count(s, k, n); 
        cout << sleep << endl;
    }
    return 0;
}
