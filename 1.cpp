#include<iostream>
using namespace std;
    
int main(){
cout<<"Welcome to Talent Battle"<<endl;

char input;
cout<<"Enter your data: "<<endl;
cin>>input;

if(!isalpha(input)){
    cout<<"Invalid input"<<endl;
}
else if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'||input=='A'||input=='E'||input=='I'||input=='O'||input=='U'){
    cout<<"Vowel"<<endl;
}
else{
    cout<<"Consonant"<<endl;
}
return 0;
}