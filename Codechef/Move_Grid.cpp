

#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int x = 0, y =0;

    x += a;
    x -= c;
    y += b;
    y -= d;

    cout << x <<" "<< y <<endl;

    return 0;
}