#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; 
        cin >> s;

        int first_sum = 0, last_sum = 0; 
        for(int i = 0; i < 6; i++)
        {
            int count = i + 1; 
            if(count < 4)
            {
                first_sum += (int)s[i];
            }else
            {
                last_sum += (int)s[i];
            }
        }

        if(first_sum == last_sum)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}