#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Minimum element: "<<min<<endl;
    cout<<"Maximum element: "<<max<<endl;
 
return 0;
}