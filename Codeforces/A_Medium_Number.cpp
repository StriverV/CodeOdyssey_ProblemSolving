#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int t;
	cin >> t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int mn = min({a,b,c});
	    int mx = max({a,b,c});
	    
	    if( a > mn && a < mx)    cout << a << endl;
	    else if( b > mn && b < mx)    cout << b << endl;
	    else   cout << c << endl;
	}
	return 0;
	
}