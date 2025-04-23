
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
    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        int n;
        cin >> n;
        
        int a=n, b=n-1, c=n-2;
        int t = a+b+c;
        

        int cc = 2*max({a,b,c});
        if( cc < t )
            cout << t << nl;

        else
            cout << "-1" << nl;
    }

    return 0;
}