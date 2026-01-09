// Problem link: https://vjudge.net/contest/780069#problem/B

#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k)
{
    vector<int> problem(n); 
    // set<int> unique_problem; 
    for(int i = 0; i < n; i++)
    {
        cin >> problem[i]; 
        // unique_problem.insert(problem[i]); 
    }

    int left_most = 0, right_most = n-1; 
    int total_solve = 0; 
    
    while (left_most <= right_most && problem[left_most] <= k)
    {
        left_most++; 
        total_solve++; 
    }
    
    while (left_most <= right_most && problem[right_most] <= k)
    {
        right_most--; 
        total_solve++; 
    }
    
    return total_solve; 
    
}

int main()
{
    int n, k;
    cin >> n >> k; 

    cout << solve(n, k) << endl; 
    return 0;
}