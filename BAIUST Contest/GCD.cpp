
#include<bits/stdc++.h>
#include<numeric>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long 
#define bl bool 
#define nl '\n'
using namespace std;

int main()
{
    Naba;

    int n;
    while(cin >> n  && n)
    {
        ll g = 0;
        for(int i = 1; i < n; i++)
            for(int j = i + 1; j <= n; j++)
               g += gcd(i,j);
           
        cout << g << nl;
    }

    return 0;
}

