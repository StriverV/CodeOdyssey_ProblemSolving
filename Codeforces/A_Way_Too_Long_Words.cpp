#include<bits/stdc++.h>
#define ll long long
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba;
    int TestCase;
    cin >> TestCase;
    while(TestCase--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int l = s.size();
    
        if(l > 10)
        {
            for(auto i : s)
            {
                cnt++;
            }
            cout<< s[0] << cnt-2 << s[l-1] <<endl;
        }

        else
        {
            cout<< s <<endl;
        }

    }

    return 0;
}