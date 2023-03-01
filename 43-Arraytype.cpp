#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,flag;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            flag=0;
        }
        else{
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
     
return 0;
}