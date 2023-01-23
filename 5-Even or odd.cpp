// Print a number is even or odd.

#include<iostream>
using namespace std;
    
int main(){
int n;
cout<<"Enter your number: "<<endl;
cin>>n;

if(n!=0){
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
else{
    cout<<"Neither even nor odd"<<endl;
}

return 0;
}