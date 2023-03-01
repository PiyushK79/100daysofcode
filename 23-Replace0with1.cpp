#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,r,newnum=0;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(n==0){
        cout<<"1"<<endl;
    }
    while(n>0){
        r = n%10;
        if(r==0){
            r=1;
        }
        newnum = newnum*10 + r;
        n = n/10; 
    }
    n = 0;
    while(newnum>0){
        r = newnum%10;
        n = n*10 + r;
        newnum /= 10;
    }

    cout<<"The replaced number is: "<<n<<endl;

return 0;
}