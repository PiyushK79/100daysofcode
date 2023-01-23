// Print the number of days in a given month and given year.

#include<iostream>
using namespace std;
    
int main(){
int month,year;

cout<<"Enter the month: ";
cin>>month;
cout<<"Enter the year: ";
cin>>year;

if(month==2){
    if(year%4==0){
        cout<<"29 days"<<endl;
    }
    else{
        cout<<"28 days"<<endl;
    }
}
else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
    cout<<"31 days"<<endl;
}
else{
    cout<<"30 days"<<endl;
}

return 0;
}