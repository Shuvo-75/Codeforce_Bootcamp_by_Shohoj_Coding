#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count = 0; 

    if(n > 1)
    {
        int i = 0;
        while (i+1 < s.size())
        {
            if(s[i] == s[i+1])
            {
                s.erase(i+1, 1);
                count++; 
            }else
            {
                i++; 
            }
        }
    }

    cout << count << endl;
    
    return 0;
}