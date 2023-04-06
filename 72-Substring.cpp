#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    string s = "";
    while (t--)
    {
        char ch;
        int i;
        string str;
        cin >> ch >> i >> str;
        if (ch == '+')
        {
            if (i == 0)
            {
                s = str + s;
            }
            else
            {
                s.insert(i, str);
            }
        }
        else
        {
            int final=stoi(str);
            cout << s.substr(i - 1, final) << endl;
        }
    }
    return 0;
}
