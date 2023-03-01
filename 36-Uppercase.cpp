#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[100];
    cout<<"Enter your string: ";
    cin>>str;
    int length=strlen(str);

    for(int i=0;i<length;i++){
        if(i==0 || i==length-1){
            str[i]= toupper(str[i]);
        }
    }
    cout<<str;
 
return 0;
}