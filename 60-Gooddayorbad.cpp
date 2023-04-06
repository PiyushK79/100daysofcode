#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cout<<"Enter no of test cases: ";
    cin>>t;
    while(t--){
        int n = 7;
        int good[n];
        cout<<"Enter the elements: "<<endl;
        for(int i=0;i<n;i++){
            cin>>good[i];
        }
        int sunny=0,rainy=0;

        for(int i=0;i<n;i++){
            if(good[i]==0){
                rainy++;
            }
            else if(good[i]==1){
                sunny++;
            }
        }

        if(sunny > rainy){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
 
return 0;
}