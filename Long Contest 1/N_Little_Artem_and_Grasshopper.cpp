// Problem link: https://vjudge.net/contest/777903#problem/N
// Problem link: https://codeforces.com/problemset/problem/641/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    string s;
    cin >> s;
    bool find_infinite = false;
    vector<long long> arr(t); 
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i]; 
    }


    vector<bool> visited(t, false);

    long long pos = 0; 
    string decision; 
    while (true)
    {
        if(pos < 0 || pos >= t)
        {
            decision = "FINITE"; 
            break; 
        }

        if(visited[pos])
        {
            decision = "INFINITE"; 
            break;
        }

        visited[pos] = true;

        if(s[pos] == '>')
        {
            pos += arr[pos]; 
        }else
        {
            pos -= arr[pos]; 
        }
    }
    
    cout << decision << endl; 
    
    return 0;
}