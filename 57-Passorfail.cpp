#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,x,p;
    cout<<"Enter no of test cases: ";
    cin>>t;

    while(t--){
        cin>>n>>x>>p;

        int result = 3 * x + (n-x) * (-1);

    if(result>=p){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }

}
return 0;
}