#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n % 2 == 0 && m % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 0 && m % 2 != 0)
        {
            cout << n << endl;
        }
        else if (n % 2 != 0 && m % 2 == 0)
        {
            cout << m << endl;
        }
        else
        {
            cout << n + m - 1 << endl;
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int n,m;
//         cin>>n>>m;

//         //minimum 1*1 tiles needed?

//         int even=1,count;
//         if(n==1 && m==1){
//             even=1;
//         }
//         else if(n%2==0){
//             even = n;
//         }
//         else if(m%2==0){
//             even = m;
//         }
//         else if(n%2==0 && m%2==0){
//             even = 1;
//         }

//         if(even==n){
//             count = m-even;
//         }
//         else if(even==m){
//             count = n- even;
//         }
//         else if(even==1){
//             count=1;
//         }
//         else if(even==0){
//             count=0;
//         }

//         count = count * even;
//         cout<<count<<endl;

//     }

// return 0;
// }