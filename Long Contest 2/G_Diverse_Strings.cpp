// Problem link: https://vjudge.net/contest/780069#problem/G
// test
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

        char min_char = *min_element(s.begin(), s.end()); 
        char max_char = *max_element(s.begin(), s.end()); 
        set<char> store; 
        for (char c : s)
        {
            store.insert(c);
        }
        
        if((store.size() == s.length()))
        {
            if((max_char - min_char + 1) == s.length())
            {
                cout << "Yes" << endl; 
            }else
            {
                cout << "No" << endl; 
            }
        }else
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}