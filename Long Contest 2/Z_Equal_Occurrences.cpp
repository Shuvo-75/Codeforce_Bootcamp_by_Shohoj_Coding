// Problem link: https://vjudge.net/contest/780069#problem/Z

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; 

        vector<int> arr(n); 
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }


        map<int, int> freq; 
        for(auto c : arr)
        {
            freq[c]++; 
        }

        vector<int> freq_store; 
        for(const auto&c : freq)
        {
            freq_store.push_back(c.second); 
        }
        sort(freq_store.begin(), freq_store.end()); 

        int long_sequence = 0;
        int m = freq_store.size();

        for (int i = 0; i < m; i++)
        {
            int x = freq_store[i];   
            int cnt = m - i;        
            long_sequence = max(long_sequence, x * cnt);
        }


        cout << long_sequence <<endl; 
        
    }
    
    return 0;
}