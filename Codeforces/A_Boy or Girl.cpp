#include<bits/stdc++.h>
using namespace std;

int main()
{
    string user_name;
    cin >> user_name;

    int distinct_char = 0;
    int freq[26] = {0};

    for(auto c : user_name)
        freq[c-97]++;
    
    for(auto c : freq)
    {
        if(c)  
            distinct_char++;
    }

    distinct_char % 2 == 0?    cout << "CHAT WITH HER!" << endl:  cout << "IGNORE HIM!" << endl;

    return 0;
}