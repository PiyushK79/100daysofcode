#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cout<<"Enter your string: ";
    cin>>str;

    for(int i=0; i<str.length();i++){
        int c= str[i];
        if(isupper(c)){
            str[i]= tolower(c);
        }
        else{
            str[i]= toupper(c);
        }
    }

    cout<<str;
 
return 0;
}