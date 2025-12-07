#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    vector<int> arr(t);
    for (int  i = 0; i < t; i++)
    {
        cin >> arr[i]; 
    }
    int counter = 0; 
    for (int i = 0; i < t; i++)
    {
        if(arr[i] >= arr[n-1] && arr[i] > 0)
        {
            counter++; 
        }
    }
    cout << counter << endl;
    
    return 0;
}