#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int rows, space;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<"\n";
    } 
 
return 0;
}