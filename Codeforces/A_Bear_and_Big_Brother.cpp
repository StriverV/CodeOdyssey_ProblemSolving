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

    int y = 0,cnt = 0;

    int Limak_weight,  Bob_weight;
    cin >> Limak_weight >> Bob_weight;


    while(Limak_weight <= Bob_weight)
    {
        Limak_weight *= 3;
        Bob_weight *= 2;

        ++y;
    }
    cout << y << nl;

    return 0;
}