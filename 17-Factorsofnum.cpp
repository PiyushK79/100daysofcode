// Take out factors of a numbers

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,r;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        r = n%i;

        if(r == 0){
        cout<<i<<" ";
    }
  }
return 0;
}