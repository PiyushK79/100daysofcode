#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str1[50], str2[50];
    int len1, len2, i,j, found=0, notfound=0;
    cout<<"Enter 1st string: ";
    cin>>str1;
    cout<<"Enter 2nd string: ";
    cin>>str2;

    len1= strlen(str1);
    len2=strlen(str2);

    if(len1==len2){
        for(i=0;i<len1;i++){
            found=0;
            for(j=0;j<len1;j++){
                if(str1[i]==str2[j]){
                    found=1;
                    break;
                }
            }
            if(found==0){
                notfound=1;
                break;
            }
        }
        if(notfound==1){
            cout<<"Not Anagram"<<endl;
        }
        else{
            cout<<"Anagram"<<endl;
        }
    }
    else{
        cout<<"Count mismatched"<<endl;
    }

return 0;
}