
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

int main()
{
    Naba;
    

    vector<int>v(4);
    for(int i = 0 ; i < 4; i++)
        cin >> v[i];
        
    set<int>s(v.begin(), v.end());
    cout << 4 - s.size() << nl;

    return 0;
}