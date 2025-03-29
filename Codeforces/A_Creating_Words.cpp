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
       string s,s2;
       cin >> s >> s2;
       
       swap(s.front(),s2.front());
       cout << s << " " << s2 << endl;
    }
    
    return 0;
}
