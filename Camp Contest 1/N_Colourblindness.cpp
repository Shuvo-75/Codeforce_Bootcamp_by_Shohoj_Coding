#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        string s1, s2; 

        cin >> s1 >> s2;

        bool find = true;
        for(int i = 0; i < x; i++)
        {
            if(((s1[i] == 'G' & s2[i] == 'R') || (s1[i] == 'B' & s2[i] == 'R')) || ((s2[i] == 'G' & s1[i] == 'R') || (s2[i] == 'B' & s1[i] == 'R')))
            {
                find = false;
            }

            if(!find) break;
        }
        if(find)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}