#include<bits/stdc++.h>
#define ll long long
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba;
    
    string word;
    cin >> word;
    
    int loc = 0, upc = 0;
    for( auto c : word)
    {
        if(c > 90)    loc++;
        else   upc++;
    }

   
    if(upc <= loc)
    {
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] <= 90) 
            {
                word[i] = tolower(word[i]);
            }   
        }
    }
    else 
    {
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] > 90) 
            {
                word[i] = toupper(word[i]);
            }  
        }
    }

    cout << word << endl;

    return 0;
}


