// Print the number of digits in the given input.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=0; n>0; i++){
        n=n/10;
        count++;
    }

    cout<<"The count is: "<<count<<endl;

return 0;
}