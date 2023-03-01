#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num, sum=0,temp,r,p,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    temp = num;
    while(temp!=0){
        temp /= 10;
        ++count;
    }
    temp = num;
    while(temp>0){
        r = temp%10;
        p = round(pow(r,count)); //pow returns double value, and round returns its equivalent int.
        sum += p;
        temp = temp/10;
    }

    if(sum == num){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }
 
return 0;
}