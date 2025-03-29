#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s;
	    cin >> s;
	    (s.find("010") != -1  || s.find("101") != -1)? cout << "Good\n" : cout << "Bad\n";
	}
	    
	return 0;
}
