#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,even=0,odd=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The number of even elements: "<<endl;
    cout<<even<<endl;
    cout<<"The number of odd elements: "<<endl;
    cout<<odd<<endl;
     
return 0;
}