#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum=0,result;
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

    reverse(arr2,arr2+n);

    for(int i=0;i<n;i++){
            result = arr1[i]*arr2[i];
            sum += result;
    }

    cout<<"The minimun scalar product is: "<<sum<<endl;
 
return 0;
}