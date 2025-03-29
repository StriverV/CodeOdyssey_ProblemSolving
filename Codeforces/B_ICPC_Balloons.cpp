#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int t;
	cin >> t;
	
	while(t--)
	{
        int len;
        cin >> len;

	    string solved_problems;
	    cin >> solved_problems;
	    
        bool solved[26] ={0};
        int ICPC_Balloons = 0;
        for(int i = 0; i<len; i++)
        {
            if(!solved[solved_problems[i] - 'A'])  
            {
                solved[solved_problems[i] - 'A'] = 1;
                ICPC_Balloons += 2;    //first team
            }  
            else
            {
                ICPC_Balloons ++;
                
            }      
        }
        cout << ICPC_Balloons << endl;    
	}
	return 0;
	
}