#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if(n < 1900)
        {
            if(n >= 1600)
            {
                cout << "Division 2" << endl;
            }else 
            {
                if(n >= 1400)
                {
                    cout << "Division 3" << endl;
                }else
                {
                    cout << "Division 4" << endl;
                }
            }
        }else
        {
            cout << "Division 1" << endl;
        }

    }
    
    return 0;
}