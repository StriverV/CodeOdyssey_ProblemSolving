#include<bits/stdc++.h>
#define ll long long
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba;
    int statements;
    cin >> statements;
   
    int final_x = 0;
    while(statements --)
    {
        string s;
        cin >> s;
        s == "++X" || s == "X++" ? final_x++ : final_x--;
    
    }
       
    cout << final_x << endl;

    return 0;
}