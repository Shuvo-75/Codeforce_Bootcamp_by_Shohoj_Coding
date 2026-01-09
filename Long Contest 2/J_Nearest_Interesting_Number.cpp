// Problem link: https://vjudge.net/contest/780069#problem/J

#include <bits/stdc++.h>

using namespace std;

int digit_sum(int n)
{
    int digit_sum = 0; 

    while (n > 0)
    {
        digit_sum += (n % 10); 
        n/= 10; 
    }
    return digit_sum; 
}

void check_valid(int n)
{
    while (digit_sum(n) % 4 != 0)
    {
        n++; 
    }
     
    cout << n << endl; 
}

int main()
{
    int n;
    cin >> n;

    check_valid(n); 
    return 0;
}