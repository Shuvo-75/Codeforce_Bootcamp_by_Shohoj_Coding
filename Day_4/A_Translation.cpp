#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1; 
    cin >> s >> s1;

    int i = 0, j = s.size() - 1; 

    while (i < j)
    {
        swap(s[i], s[j]);
        i++, j--; 
    }
    if(s == s1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}