#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    
    map<int, int>freq;

    for(int i = 0; i < n; i++)
        freq[a[i]]++;             
        
    int d = 0; 
    for(auto i : freq)
    {
        if(i.second < i.first)
            d += i.second;
        else if (i.second > i.first)
            d += i.second- i.first;
    }
    cout << d << endl;

	return 0;
} 
