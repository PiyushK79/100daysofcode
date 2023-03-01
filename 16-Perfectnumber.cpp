// a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, r,sum=0;
    cout<<"Enter your number: ";
    cin>>n;

    for(int i=1;i<n;i++){
        r = n%i;
        if(r==0){
            sum = sum + i;
        }
    }
    if(sum==n){
        cout<<"Perfect number"<<endl;
    }
    else{
        cout<<"Not a Perfect number"<<endl;
    }
 
return 0;
}