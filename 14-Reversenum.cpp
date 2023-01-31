#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum=0,r;
    cout<<"Enter your number: ";
    cin>>n;

    while(n>0){
        r=n%10;
        sum = sum*10 + r;
        n = n/10;
    }
    cout<<"The reversed number is: "<<sum;

return 0;
}