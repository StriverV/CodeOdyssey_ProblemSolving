
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

    cin.ignore();

    while(TestCase--)
    {

        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        vector<char>v;
        while(ss >> word)
        {
            v.push_back(word[0]);
        }

        
        for(auto i : v)
            cout << i;
        cout << nl;
    }

    return 0;
}