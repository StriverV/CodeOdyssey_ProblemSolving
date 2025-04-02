


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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        
        int cnt0_to_1 = 0, cnt1 = 0;
        for(auto i : s)
        {
            if(i == '0' && cnt0_to_1 < k)
            {
                cnt0_to_1++;
                 
            }
            else if(i == '1')
            {
                cnt1++;
            }
                
        }
        
        if(k>0)
           cout << cnt0_to_1 + cnt1 << endl;
        else if ( k == 0 && cnt1 == 0)
           cout << k << endl;
        else if(k == 0 && cnt1)
             cout << n << endl;

    }

    return 0;
}
