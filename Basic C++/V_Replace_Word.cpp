#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (true)
    {
        int pos = s.find("EGYPT");      

        if (pos != -1)
        {
            s.erase(pos, 5);      // len_EGYPT = 5
            s.insert(s.begin() + pos, ' ');
        }
        else  
           break;  
    }
    cout << s << endl;

    return 0;
}
