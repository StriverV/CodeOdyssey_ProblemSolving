#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
       int a,b,c;
       cin >> a >> b >> c;
       (a+b == c) ? cout << "+" << endl : cout << "-" << endl;
    }
    
    return 0;
}
