#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char s1[50];
    char s2[50];
    cout<<"Enter first string: "<<endl;
    cin>>s1;
    cout<<"Enter second string: "<<endl;
    cin>>s2;

    cout<<strcat(s1,s2)<<endl;
 
return 0;
}



// Alternate method;
// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     string s1;
//     string s2;
//     cout<<"Enter first string: "<<endl;
//     cin>>s1;
//     cout<<"Enter second string: "<<endl;
//     cin>>s2;

//     cout<<s1.append(s2)<<endl;
 
// return 0;
// }