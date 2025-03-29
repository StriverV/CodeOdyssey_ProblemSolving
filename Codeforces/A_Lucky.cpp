#include <bits/stdc++.h>
using namespace std;

int main() {

	int testCase;
	cin >> testCase;
	
	while(testCase--)
	{
	    string ticket;
    	cin >> ticket;
 
	    vector<int>digit;
	
	    for(auto i = 0; i < 6; i++)
	    {
	        int x =  ticket[i] - '0';
	        digit.push_back(x);
	    }
	
        (digit[0]+digit[1]+digit[2] == digit[3]+digit[4]+digit[5]) ? cout << "yEs" << endl : cout << "nO" << endl;
	}
    
	return 0;
}