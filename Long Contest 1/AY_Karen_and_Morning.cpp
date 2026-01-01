// Problem link: https://vjudge.net/contest/777903#problem/AY

#include <bits/stdc++.h>

using namespace std;

string leading_zero_controll(int x)
{
    if(x < 10)
    {
        return "0" + to_string(x); 
    }else
    {
        return to_string(x); 
    }
}


int main()
{
    int h, m;
    char colon; 
    cin >> h >> colon >> m;

    int starting_time = h * 60 + m;
    
    for(int t = 0; t < (24 * 60); t++)
    {
        int current_time = (starting_time + t) % (24 * 60); 
        int new_hour = current_time/60; 
        int new_min = current_time % 60; 

        string hour = leading_zero_controll(new_hour); 
        string minutes = leading_zero_controll(new_min);

        string time = hour + ":" + minutes; 
        string reverse_time = time; 
        reverse(reverse_time.begin(), reverse_time.end()); 

        if(time == reverse_time)
        {
            cout << t << endl; 
            break;
        }
        
    }


    // string hour = leading_zero_controll(h); 
    // string minutes = leading_zero_controll(m);
    
    // string reverse_hour = hour, reverse_minutes = minutes;
    // reverse(reverse_hour.begin(), reverse_hour.end()); 
    // reverse(reverse_minutes.begin(), reverse_minutes.end()); 


    // cout << reverse_minutes << ":" << reverse_hour << endl; 

    
    return 0;
}