#include <bits/stdc++.h>
using namespace std;

bool even (int a[],int n)
{
    bool flag = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 != 0)
        {
            flag = 0; 
            break;
        }
            
    }  
    return flag;
}
int main()
{
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];

    if(even(a,n))  
    {
        int cnt = 0;
        while(even(a,n))
        {
            for(int i = 0; i<n; i++)
            {
                a[i] /= 2;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}
