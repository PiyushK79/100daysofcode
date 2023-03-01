// Print the given nums and denos in their simplified format and in rational form i.e. x3/y3.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    float x1,y1,x2,y2,x3,y3;
    char ch;
    cout<<"Enter numerator and denominator for 1st fraction: ";
    cin>>x1>>y1;
    cout<<"Enter numerator and denominator for 2nd fraction: ";
    cin>>x2>>y2;

    x3 =  (x1*y2) + (x2*y1);
    y3 =  (y1*y2);

    cout<<"Result: "<<x3<<"/"<<y3<<endl;

return 0;
}

