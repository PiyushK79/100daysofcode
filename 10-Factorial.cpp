#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter your number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is: " << fact << endl;

    return 0;
}