#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int flag = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
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
    cout << "Enter your number: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (isprime(i))
        {
            if (isprime(n - i))
            {
                cout << n << " can be expressed as sum of " << i << " and " << n - i << endl;
            }
        }
    }

    return 0;
}