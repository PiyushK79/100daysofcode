// Strong number is when the sum of factorial of each digit comes out to the given number.
// Ex- 145 , 1!+4!+5! = 1 + 24 +120 = 145.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,r,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    int p = n;
    while(n){
        int i=1, fact=1;
        r = n%10;
        while(i<=r){
            fact=fact*i;
            i++;
        }
        sum += fact;  
        n= n/10;
    }
    if(sum == p){
        cout<<"Strong number"<<endl;
    }
    else{
        cout<<"Not a strong number"<<endl;
    }
 
return 0;
}
