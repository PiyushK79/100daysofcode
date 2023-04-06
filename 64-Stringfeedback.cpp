#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >>t;
    while(t--){
        char str[1000];
        cin>>str;
        int len=strlen(str);
        int flag=0;

        for(int i=0;i<len;i++){
            if((str[i]=='0' && str[i+1]=='1' && str[i+2]=='0') || (str[i]=='1' && str[i+1]=='0' && str[i+2]=='1')){
                flag=1; 
                break;  
            }
        }

        if(flag==0){
            cout<<"Bad"<<endl;
        }
        else{
            cout<<"Good"<<endl;
        }

    }
 
return 0;
}