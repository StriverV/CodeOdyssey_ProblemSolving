#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
       string s;
       cin >> s;
      
       bool flag  = 0;
        
       vector <string> v = {"YES","yES","yeS","Yes","YEs","yEs","yes","YeS"};
       
       for(auto i : v)
       {
           if( i == s)
           {
               flag = 1;
               break;
           }
       }
      
       (flag) ? cout << "YES" <<endl : cout << "NO" <<endl;
    }
    
    return 0;
}
