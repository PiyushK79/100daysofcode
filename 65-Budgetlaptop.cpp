#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,b,Wi,Hi,Pi;
        int max = -1;
        cin>>n>>b;
        for(int i=0;i<n;i++){
            cin>>Wi>>Hi>>Pi;

            int area = Wi * Hi;
            
            if(Pi<=b){
                if(area>max){
                    max=area;
                }
            }
        }

        if(max==-1){
            cout<<"No tablet"<<endl;
        }
        else{
            cout<<max<<endl;
        }  
    }
 
return 0;
}