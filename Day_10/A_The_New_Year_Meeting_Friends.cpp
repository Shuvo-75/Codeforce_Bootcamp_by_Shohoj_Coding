// Problem link: https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> point; 
    for(int i = 0; i < 3; i++)
    {
        int x; 
        cin >> x; 
        point.push_back(x); 
    }

    sort(point.begin(), point.end()); 
    int distance = 0; 
    for(int i = 0; i < 3; i++)
    {
        distance += abs(point[i] - point[1]); 
    }

    cout << distance << endl; 
    return 0;
}