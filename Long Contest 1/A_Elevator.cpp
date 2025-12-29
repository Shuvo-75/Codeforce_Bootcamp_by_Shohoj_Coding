// Problem link: https://codeforces.com/problemset/problem/120/a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string side;
    int floor_number; 
    cin >> side >> floor_number;

    if(side == "front")
    {
        if(floor_number % 2 == 0)
        {
            cout << "R";
        }else
        {
            cout << "L"; 
        }
    }
    
    if(side == "back")
    {
        if(floor_number % 2 == 0)
        {
            cout << "L";
        }else
        {
            cout << "R"; 
        }
    }
    return 0;
}


// void front(int floor)
// {
//     if(floor % 2 == 0)
//     {
//         cout << "R" << endl;
//     }else
//     {
//         cout << "L" << endl; 
//     }
// }

// void back(int floor)
// {
//     if(floor % 2 == 0)
//     {
//         cout << "L" << endl;
//     }else
//     {
//         cout << "R" << endl; 
//     }
// }

// void click(string s, int floor)
// {   
//     for(char &c : s)
//     {
//         c = tolower(c); 
//     }
//     if(s == "front")
//     {
//         front(floor); 
//     }else
//     {
//         back(floor); 
//     }
// }