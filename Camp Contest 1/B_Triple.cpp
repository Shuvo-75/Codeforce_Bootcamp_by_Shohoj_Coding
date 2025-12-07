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

        sort(arr.begin(), arr.end(), greater<int>());
        
        unordered_map<int, int> freq; 

        for(int c : arr)
        {
            freq[c]++; 
        }

        bool find = false;
        int value = -1; 
        for(int c : arr)
        {
            if(freq[c] >= 3)
            {
                value = c;
                find = true;
            }

            if(find) break;
        }

        cout << value << endl;
    }
    
    return 0;
}