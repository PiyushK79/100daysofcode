#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter the elements of first array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++){
        int res = arr1[i]*arr2[i];
        sum += res;
    }

    cout<<"The scalar product is: "<<sum<<endl;
 
return 0;
}