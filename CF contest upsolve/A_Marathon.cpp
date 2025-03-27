#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
    	
    	int Timur, b, c, d;
    	cin >> Timur >> b >> c >> d;
    	
    	vector<int>v;
    	v.push_back(b);
    	v.push_back(c);
    	v.push_back(d);
    
    	int participants_in_front_of_Timur = 0;
    	
    	for(auto i : v)
    	{
    	    if(Timur < i)
    	    {
    	        participants_in_front_of_Timur++;
    	   
    	    }
    	}
    	
        cout << participants_in_front_of_Timur << endl ;
	}
	return 0;
	
}