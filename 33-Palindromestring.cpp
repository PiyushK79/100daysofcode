#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char s[100];
    cout<<"Enter the string: ";
    cin>>s;

    int length = strlen(s);
    int flag=0;

    for(int i=0;i<length;i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break;   
        }
    }

    if(flag){
        cout<<"String is not a palindrome."<<endl;
    }
    else{
        cout<<"String is a palindrome."<<endl;
    }
 
return 0;
}