#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    string temp =" ";
    cout<<"Enter your string: ";
    cin>>str;

    for(int p=0; p<=str.length();p++){
        if(str[p]=='a' || str[p]=='e' || str[p]=='i' ||str[p]=='o' ||str[p]=='u' || str[p]=='A' || str[p]=='E' || str[p]=='I' || str[p]=='O' || str[p]=='U'){
                temp;
        }
        else{
            temp = temp + str[p];
        }
    }
    cout<<temp;
 
return 0;
}