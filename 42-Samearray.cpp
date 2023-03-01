#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n1,n2,flag=0;
    cout<<"Enter the number of elements in array 1: ";
    cin>>n1;
    cout<<"Enter the number of elements in array 2: ";
    cin>>n2;

    int arr1[n1], arr2[n2];
    cout<<"Enter the elements of array 1: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of array 2: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    if(n1==n2){
        for(int i=0; i<n1;i++){
            if(arr1[i]==arr2[i]){
                flag=1;
                
            }
        }
    }

    if(flag==1){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
return 0;
}