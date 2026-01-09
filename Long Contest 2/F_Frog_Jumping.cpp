// Problem link: https://vjudge.net/contest/780069#problem/F

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long r, l, total;
        cin >> r >> l >> total;

        long long ans;

        if (total % 2 == 0) 
        {
            ans = (total / 2) * (r - l);
        } else 
        {
            ans = ((total + 1) / 2) * r - (total / 2) * l;
        }

        cout << ans << endl;
    }
    return 0;
}
