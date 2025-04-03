#include<bits/stdc++.h>
#define ll long long
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba;
    int n, k;
    cin >> n >> k;
    
    vector<int> scores(n);
    for(int i = 0; i < n; i++)
        cin >> scores[i];
    
    int k_score = scores[k-1];
   
    int participants = 0;
    for(int i = 0; i < n; i++)
    {
        if(scores[i] >= k_score && scores[i] > 0)
            participants++;
    }
    cout << participants << endl;
    return 0;
}