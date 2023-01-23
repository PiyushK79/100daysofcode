#include<iostream>
using namespace std;
    
int main(){
    char n;
    cout<<"Enter your data: "<<endl;
    cin>>n;

    if(n>='a' && n<='z' || n>='A'&& n<='Z'){
        cout<<"Alphabet"<<endl;
    }
    else{
        cout<<"Not an Alphabet"<<endl;
    }
return 0;
}