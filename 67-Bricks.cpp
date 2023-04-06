#include <iostream>
using namespace std;
int main()
{
    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int s, w1, w2, w3;
        cin >> s >> w1 >> w2 >> w3;
        if ((w1 + w2 + w3) <= s)
        {
            count = 1;
        }
        else if ((w1 + w2) <= s || (w3 + w2) <= s)
        {
            count = 2;
        }
        else
        {
            count = 3;
        }
        cout << count << endl;
    }
    return 0;
}
