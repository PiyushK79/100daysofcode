// Using inbuilt function-

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char *s;
    cout<<"Enter your string: ";
    cin>>s;

    cout<<"The reversed string is: "<<strrev(s);
 
return 0;
}



// // Using for loop:-
// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     char *s, temp;
//     int start, end ,len;
//     cout<<"Enter your string: ";
//     cin>>s;
//     len= strlen(s);
//     start = 0;
//     end =len-1;

//     for(int i=start;i<end;i++){
//         temp= s[i];
//         s[i]=s[end];
//         s[end]=temp;
//         end--;
//     }
    
//     cout<<"The reversed string is: "<<s;
 
// return 0;
// }