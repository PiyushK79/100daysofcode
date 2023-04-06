#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        if((n+1)*y < x){
            cout<<"No"<<endl;
        }
        else if((n+1)*y > x){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

 
return 0;
}