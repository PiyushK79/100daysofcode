//Print the roots of a quadratic equation

#include<iostream>
#include<math.h>
using namespace std;

int main(){
int a,b,c;
cout<<"Enter a, b and c: ";
cin>>a>>b>>c;

int r1,r2,root;
root = sqrt((b*b) - 4*a*c);

r1= (-b + root)/2*a ;
r2= (-b - root)/2*a ;

cout<<"The roots are: "<<endl;
cout<<r1<<" , "<<r2;

return 0;
}