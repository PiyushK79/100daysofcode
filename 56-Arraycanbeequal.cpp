#include <bits/stdc++.h>
using namespace std;

int EqualNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
 
        while (arr[i] % 2 == 0){
            arr[i] /= 2;
        }
        while (arr[i] % 3 == 0){
            arr[i] /= 3;
        }
        if (arr[i] != arr[0]) {
            return 0;
        }
    }
 
    return 1;
}

int main()
{
    int p;
    cout<<"Enter number of elements in array: ";
    cin >> p;
    int arr[p];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if (EqualNumbers(arr, n))
        cout<<"Yes";
    else
        cout<<"No";
 
    return 0;
}