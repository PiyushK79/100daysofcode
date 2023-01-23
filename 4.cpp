#include<iostream>
using namespace std;
    
int main(){
    int n;

    cout<<"Enter your number: "<<endl;
    cin>>n;

    if(n==0 || n== -0){
        cout<<"Neither positive nor negative"<<endl;
    }
    else if(n<0){
        cout<<"Negative number"<<endl;
    }
    else{
        cout<<"Positive number"<<endl;
    }

return 0;
}