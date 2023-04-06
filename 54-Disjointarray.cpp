#include<bits/stdc++.h>
using namespace std;

int disjoint(int arr1[], int arr2[], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int m,n;
    cout<<"Enter number of elements in first array: ";
    cin >>m;
    int arr1[m];
    cout<<"Enter elements of array: "<<endl;
    for (int p = 0; p < m; p++)
    {
        cin >> arr1[p];
    }
    cout<<"Enter number of elements in second array: ";
    cin >> n;
    int arr2[n];
    cout<<"Enter elements of array: "<<endl;
    for (int p = 0; p < n; p++)
    {
        cin >> arr2[p];
    }

    if(disjoint(arr1,arr2,m,n)){
        cout<<"Disjoint"<<endl;
    }
    else{
        cout<<"Not Disjoint"<<endl;
    }
    
return 0;
}
