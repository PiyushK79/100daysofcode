#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,m;
        cout<<"Enter values:"<<endl;
        cin>>w1>>w2>>x1>>x2>>m;

        int min= w1+x1*m;
        int max= w1+x2*m;

        if(w2<=max && w2>=min){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
 
return 0;
}