#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for(long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long minimum_value = arr[0];

        long long sum = 0; 
        for(int i = 0; i < n; i++)
        {
            if(minimum_value < arr[i])
            {
                sum += (arr[i] - minimum_value);
            }
        }

        cout << sum << endl;
    }
    
    return 0;
}