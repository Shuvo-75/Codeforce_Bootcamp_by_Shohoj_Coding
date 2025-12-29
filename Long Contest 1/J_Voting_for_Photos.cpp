// Problem link: https://vjudge.net/contest/777903#problem/J

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; 
    vector<int> arr(t); 
    for(int i = 0;i < t; i++)
    {
        cin >> arr[i]; 
    }

    unordered_map<int, int> freq; 

    int gain_most_like = -1; 
    int winner_value = 0; 
    for(int c : arr)
    {
        freq[c]++; 
        
        if(freq[c] > gain_most_like)
        {
            gain_most_like = freq[c]; 
            winner_value = c; 
        }
    }

    // for(auto &c : freq)
    // {
    //     int value = c.first; 
    //     int count = c.second; 

    //     if(max_value < value * count)
    //     {
    //         max_value = value * count; 
    //         root_count = count; 
    //     }
    // }

    cout << winner_value << endl; 

    return 0;
}