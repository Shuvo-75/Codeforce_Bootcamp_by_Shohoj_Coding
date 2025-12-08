// Problem link: https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long odd_have, even_have, odd, even; 
    if(n % 2 == 0)
    {
        odd_have = n / 2; 
        even_have = n / 2; 
    }else
    {
        odd_have = (n/2) + 1;
        even_have = n/2;      
    }

    long long sum = (even_have * (even_have + 1)) - (odd_have * odd_have);

    cout << sum << endl;
    return 0;
}