#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[100];
    cout<<"Enter your string: ";
    cin>>str;
    int frequency[300]={0};

    for(int i=0;str[i]!='\0';i++){
        frequency[str[i]]++;
    }
    for(int i=0; i<300;i++){
        if(frequency[i]==1){
            cout<<char(i)<<" ";
        }
    }

return 0;
}