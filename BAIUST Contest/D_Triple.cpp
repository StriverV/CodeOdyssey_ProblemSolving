
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

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 

        vector<int>vis(n+5);
        for(int i = 0; i < n; i++)
            vis[i] = 0;


        for(int i = 0; i < n; i++)
            vis[a[i]]++;
    

        bl caught = 0;
        int x;
        for(int i = 0; i < vis.size(); i++)
        {
            if(vis[i] >= 3)  
            {
                x=i;
                caught = 1;
            }
        }
        caught?  cout << x << endl :  cout << "-1" << endl;
    }

    return 0;
}


