
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

    	int rating;
    	cin >> rating;
    	
    	if(rating >= 1900)    cout << "Division 1" << endl;
    	else if(rating >= 1600 )  cout << "Division 2" << endl;
    	else if(rating >= 1400)   cout << "Division 3" << endl;
    	else   
       	    cout << "Division 4" << endl;
    }

    return 0;
}

