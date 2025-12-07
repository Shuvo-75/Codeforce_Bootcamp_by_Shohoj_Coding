#include <bits/stdc++.h>
using namespace std;
void string_input(vector<string> &str,vector<string> &str2, vector<string> &str3, int x)
{
    for(int i = 0; i < x; i++) cin >> str[i];
    for(int i = 0; i < x; i++) cin >> str2[i];
    for(int i = 0; i < x; i++) cin >> str3[i];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        vector<string> str(x), str2(x), str3(x);

        string_input(str, str2, str3, x);

        vector<string> combined;
        combined.insert(combined.end(), str.begin(), str.end());
        combined.insert(combined.end(), str2.begin(), str2.end());
        combined.insert(combined.end(), str3.begin(), str3.end());

        unordered_map<string, int> frequency; 

        for(auto &c : combined)
        {
            frequency[c]++; 
        }


        int str_p = 0, str2_p = 0, str3_p = 0;
         
        for(auto &c : str)
        {
            if(frequency[c] == 1) 
                str_p += 3; 
            else if(frequency[c] == 2)
                str_p += 1; 
        }

        for(auto &c : str2)
        {
            if(frequency[c] == 1) 
                str2_p += 3; 
            else if(frequency[c] == 2)
                str2_p += 1; 
        }

        for(auto &c : str3)
        {
            if(frequency[c] == 1) 
                str3_p += 3; 
            else if(frequency[c] == 2)
                str3_p += 1; 
        }

        cout << str_p << " " << str2_p << " " << str3_p << endl;
    }
    
    return 0;
}