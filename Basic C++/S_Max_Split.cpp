#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int max_balanced_string = 0;
    int L=0,R=0;
    vector<string>v;
    string str;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L') 
        {
            L++;
            str += s[i];
        } 
            
        else 
        {
            R++;
            str += s[i];
        }  
           
        if(L == R)
        {
            max_balanced_string++;

            v.push_back(str);
            
            str.clear();
            L=0;
            R=0;
        }
    }
    
    cout << max_balanced_string << endl;
    // or cout << v.size() << endl;

    for(auto i : v)
    {
        cout << i << endl;
    }
    

    return 0;
}


