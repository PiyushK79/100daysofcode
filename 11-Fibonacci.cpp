#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a=0,b=1,i,n,sum;
    cout<<"Enter your number: ";
    cin>>n;
    
    cout<<a<<" "<<b<<" ";
    for(i=2;i<n;i++){
        sum = a+b;
        cout<<sum<<" "; 
        a=b;
        b=sum;
    }
return 0;
}