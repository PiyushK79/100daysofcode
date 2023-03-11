#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
    int rev = 0, temp = n;
    while (temp > 0)
        {
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
    if (n == rev)
        return 1;
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (check(arr[i]) && res < arr[i])
            res = arr[i];
    }
    if (res == INT_MIN)
        res = -1;
    cout << "Longest palindrome: " << res;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,sum=0,rem,temp,i,j;
//     cout<<"Enter the number of elements in array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(i=n;i>=0;i++){
//         temp=arr[i];
//         while(arr[i]!=0){
//             rem = arr[i]%10;
//             sum = 10*sum + rem;
//             arr[i] = arr[i]/10;
//         }
//         if(sum == temp){
//             cout<<sum<<endl;
//             break;
//         }
//     }

// return 0;
// }