#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    bool flag_1 = false;

    for(int i = a; i <=b; i++)
    {
        bool flag = 1;
        int temp = i;
        while(temp > 0)
        { 
            if ( temp % 10 != 4 && temp % 10 != 7 )
            {
                flag = false;
                break;
            }
            temp /= 10;
        }
        if(flag){
            cout << i << " ";
            flag_1 = true;
        }
            
    }
    if(!flag_1)
        cout << "-1";

    return 0;
}