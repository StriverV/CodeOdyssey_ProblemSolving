#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
    	
    	int n;
    	cin >> n;
    	
    	vector<int>a(n+5);
    	
    	for(int i = 0; i < n; i++)
        	cin >> a[i];
        	

        vector<int>appear(n+5);
        for(int i = 0; i < n; i++)
        {
            appear[i] = 0;
        }
        
        for(int i = 0; i < n; i++)
        {
            appear[a[i]]++;
        }
        bool flag = 0;
        int x;
        for(int i = 0; i < appear.size(); i++)
        {
            if(appear[i] >= 3)  
            {
                x=i;
                flag = 1;
            }
    	
        }
        (flag == 1)?  cout << x << endl :  cout << "-1" << endl;;
	}
	return 0;
	
}