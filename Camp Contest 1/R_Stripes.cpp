#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char str[8][8];

        int R_count = 0, B_count = 0; 

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cin >> str[i][j]; 
            }
        }


        bool red_last = false, blue_last = false;
        for(int i = 0; i < 8; i++)
        {
            bool red_first = true;
            for(int j = 0; j < 8; j++)
            {
                if(str[i][j] != 'R')
                {
                    red_first = false;
                    break;
                }
            }

            if(red_first)
            {
                red_last = true;
                break;
            }
        }

        for(int i = 0; i < 8; i++)
        {
            bool blue_first = true;
            for(int j = 0; j < 8; j++)
            {
                if(str[i][j] != 'B')
                {
                    blue_first = false;
                    break;
                }
            }

            if(blue_first)
            {
                blue_last = true;
                break;
            }
        }

        if(red_last)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }
    
    return 0;
}