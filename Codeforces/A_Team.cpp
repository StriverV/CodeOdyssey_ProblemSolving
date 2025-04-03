#include<bits/stdc++.h>
#define ll long long
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba;
    int problems;
    cin >> problems;
    int implement_no = 0;
    while(problems--)
    {
        int friends [3];
        for(int i = 0; i < 3; i++)
            cin >> friends [i];
        
        int cnt = 0;
        for(auto i : friends )
        {
            if( i == 1)
            {
                cnt++;
            }
        }
       
        if(cnt  >= 2)
            implement_no++;

    }
    cout << implement_no << endl;

    return 0;
}