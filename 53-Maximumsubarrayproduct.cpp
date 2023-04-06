#include <bits/stdc++.h>
using namespace std;
int MaxSubArrProd(int arr[], int n)
{

    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        int prod = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            ans = max(ans, prod);
            prod = prod * arr[j];
        }
        ans = max(ans, prod);
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number of elements in array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Max product is: "<< MaxSubArrProd(arr, n);
    return 0;
}
