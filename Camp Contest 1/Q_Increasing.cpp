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

        sort(arr.begin(), arr.end());

        int size = arr.size(); 
        bool find = true; 
        if(size > 1)
        {
            for(int i = 0; i < n-1; i++)
            {
                if(arr[i] >= arr[i+1])
                {
                    find = false; 
                    break;
                }
            }
        }

        if(find)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
        

    }
    
    return 0;
}