#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,count=0;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<=n-1;i++){
    //     for(int j=i+1;j<=n;j++){
    //         if(arr[i]==arr[j]){
    //             count = 1;
    //         }  
    //     }
    // }

    // cout<<"Array after removal of duplicates: "<<endl;
    // if (count == 0){
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }
    // }

    sort(arr,arr+n);
    cout<<arr[0]<<" ";
    int ptr1=0,ptr2=1;

    for(int i=ptr2;i<n;i++){
        if(arr[ptr1]==arr[ptr2]){
            ptr2++;
        }
        else{
            cout<<arr[ptr2]<<" ";
            ptr1=ptr2;
            ptr2++;
        }
    }

return 0;
}