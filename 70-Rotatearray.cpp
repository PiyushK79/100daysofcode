#include <bits/stdc++.h>
using namespace std;

void RightRotate(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            cout << a[n + i - k] << " ";   //rotate kiye hue elements print karne
        }
        else
        {
            cout << (a[i - k]) << " ";     //jo elements array ke size ke andar hi rotate ho rahe hai unke liye
        }
    }
    cout << "\n";
}

int main()
{
    int n,k=1;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    RightRotate(array,n,k);
}

// This code is contributed by Surendra_Gangwar
