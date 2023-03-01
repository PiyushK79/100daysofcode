#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,r,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    int temp = n;

    while(temp>0){
        r = temp%10;
        sum = 10*sum + r;
        temp = temp/10;
    }
    
    if(sum == n){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
return 0;
}