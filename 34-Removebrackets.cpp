#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[100],new_str[100];
    cout<<"Enter your expression: ";
    cin>>str;
    int i=0, j=0;

    while(str[i]!='\0'){
    if(str[i]!='(' && str[i]!=')'){
       new_str[j++] = str[i];
    }
    i++;
    }
    new_str[j]='\0';
    cout<<new_str;
 
return 0;
}