#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<long long> arr(4);

        for(int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int front_have = 0; 
        for(int i = 1; i < 4; i++)
        {
            if(arr[0] < arr[i])
            {
                front_have++; 
            }
        }

        cout << front_have << endl;
    }
    
    return 0;
}