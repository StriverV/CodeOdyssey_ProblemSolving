
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

    int X;
    cin >> X;
    
    int total = 0;
    int maximum_6s = 0;
    bool flag=1;
    for(int i=1; i<=X;i++)
    {
        if(total < X)
        {
            total  = i * 6;
            maximum_6s ++;

        }
        if(total > X)
        {
            flag=0;
            break;
           
        }
           
    }
    flag == 1? cout << maximum_6s <<endl: cout << maximum_6s-1 <<endl;
    return 0;
}