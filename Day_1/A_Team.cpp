#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0; 
    while (n--)
    {
        vector<int> problem(3);
        int solve = 0; 
        for(int i = 0; i < 3; i++)
        {
            cin >> problem[i];
            if(problem[i] == 1)
            {
                solve++; 
            }
        }
        if(solve > 1)
        {
            count++; 
        }
    }
    cout << count << endl;
    
    return 0;
}