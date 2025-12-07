#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        int sum = 0; 
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        int update_sum = sum - arr[2];

        if(update_sum == arr[2])
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }

    }
    
    return 0;
}