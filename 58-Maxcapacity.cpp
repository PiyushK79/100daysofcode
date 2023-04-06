#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,k,x;
    cout<<"Enter number of test cases: ";
    cin>>t;

    while(t--){
        cout<<"Enter full capacity and already filled quantity in litres: "<<endl;
        cin>>k>>x;
        cout<<k-x<<endl;
    }
 
return 0;
}