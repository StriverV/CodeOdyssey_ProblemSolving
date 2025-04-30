
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
using namespace std;

int main()
{
    Naba;

    int n; cin >> n;
    vector<int>v(n);
    vector<int>v2(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        v2[i] = v[i];
    }
       
    sort(v.begin(), v.end());
  
   
    v == v2? yes:no;

    return 0;
}