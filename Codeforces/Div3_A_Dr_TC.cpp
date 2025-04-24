
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
        string s;
        cin >> s;

        int cnt = 0;

        for(int stp = 0; stp < n; stp++)
        {
            if(n==1 && s[stp] == '0') 
            {
                cnt = 1;
                break;
            }
            else if(n==1 && s[stp] == '1')  
            {
                break;
            }    
                
            for(int j = 0; j < n; j++)
            {
                if(stp == j && s[j]  == '0') 
                    cnt++;
                else if(stp != j && s[j]  == '1')  
                    cnt++;
                else if (stp != j && s[j]  == '0')  
                    continue;
            }

        }

        cout << cnt << nl;
    }

    return 0;
}