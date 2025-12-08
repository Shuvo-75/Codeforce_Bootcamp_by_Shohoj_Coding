// Problem link: https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int passenger_count = 0; 
    int max_passenger = 0; 
    while (n--)
    {
        int exit, enter;
        cin >> exit >> enter;
        passenger_count -= exit;
        passenger_count += enter;
        max_passenger = max(passenger_count, max_passenger);
    }
    cout << max_passenger << endl;
    
    return 0;
}