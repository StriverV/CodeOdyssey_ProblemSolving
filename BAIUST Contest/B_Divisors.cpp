
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {

        if(n%i == 0)
           cout << i << nl;
        
    }

    

    return 0;
}