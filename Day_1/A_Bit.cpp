#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int val = 0; 
    while (t--)
    {
        string s;
        cin >> s;

        if(s == "++X")
            ++val;
        else if(s == "--X")
            --val;
        else if(s == "X++")
            val++;
        else
            val--;  
    }

    cout << val << endl;
    
    return 0;
}