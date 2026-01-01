// Problem link: https://vjudge.net/contest/777903#problem/AZ

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x; 
    cin >> x;
    vector<int> groupA(x); 
    vector<int> groupB(x); 

    // int sumA = 0, sumB = 0; 
    for(int i = 0; i < x; i++)
    {
        cin >> groupA[i]; 
        // sumA += groupA[i]; 
    }

    for(int i = 0; i < x; i++)
    {
        cin >> groupB[i]; 
        // sumB += groupB[i]; 
    }

    // sort(groupA.begin(), groupA.end());
    // sort(groupB.begin(), groupB.end()); 

    unordered_map<int, int> freqA, freqB; 

    for(int c : groupA) freqA[c]++; 

    for(int c : groupB) freqB[c]++; 

    int total_swap_needed = 0; 
    bool even_find = false; 
    for(int mark = 1; mark <= 5; mark++)
    {
        int countA = freqA[mark]; 
        int countB = freqB[mark]; 

        if((countA + countB) % 2 != 0) 
        {
            even_find = true; 
            break;
        }

        total_swap_needed += max(countA - countB, 0); 
    }

    if(even_find)
    {
        cout << -1 << endl; 
    }else
    {
        cout << total_swap_needed/2 << endl; 
    }
    return 0;
}