// Problem link: https://vjudge.net/contest/777903#problem/AX

#include <bits/stdc++.h>

using namespace std;
bool check_string_or_number(string &s)
{
    if(s.empty()) return false;
    for(char c : s)
    {
        if(!isdigit(c)) return false;
    }

    return true;
}
int main()
{
    int t;
    cin >> t;
    int check = 0; 
    while (t--)
    {
        string s;
        cin >> s;
        vector<string> haram_drink = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"}; 

        bool is_number = check_string_or_number(s);
        if(!is_number)
        {
            if(find(haram_drink.begin(), haram_drink.end(), s) != haram_drink.end()) 
            {
                check++;
            }
        }else
        {
            int num = stoi(s); 
            if(num < 18)
            {
                check++; 
            }
        }
    }
    cout << check << endl; 
    return 0;
}