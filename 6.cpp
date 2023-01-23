#include<iostream>
using namespace std;
    
int main(){
int x,y;

cout<<"Enter x coordinate: ";
cin>>x;
cout<<"Enter y coordinate: ";
cin>>y;

if(x>0 && y>0){
    cout<<"The point is in first quadrant."<<endl;
}
else if(x<0 && y>0){
    cout<<"The point is in second quadrant."<<endl;
}
else if(x<0 && y<0){
    cout<<"The point is in third quadrant."<<endl;
}
else if(x>0 && y<0){
    cout<<"The point is in fourth quadrant."<<endl;
}
else if(x==0 && y==0){
    cout<<"The point is the origin."<<endl;
}

return 0;
}