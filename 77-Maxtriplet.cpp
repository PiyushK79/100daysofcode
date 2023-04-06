#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        int i,j,k,ans;
        i = arr[0];
        j = arr[n-1];
        k = arr[n-2];

        ans = (j-i)*k;

        cout<<ans<<endl;
    }
 
return 0;
}