#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    char c[20];
    cout<<"enter the character";
    cin>>c;
    int len=strlen(c);
    char d[20];
    for(int i=0;i<len;i++){
        for(int j=len-1;j<=0;j++){
            d[i]=c[j];
        }
    }
    if(strcmp(c,d)==0){
        cout<<"It's Palindrome"<<endl;
    }else{
        cout<<"It's not Palindrome"<<endl;
    }
    cout<<"the frequency of the characters "<<len<<endl;
    for(int i=0;i<len;i++){
        if(c[i]=='a'){
            c[i]='*';
        }else if(c[i]=='e'){
                 c[i]='/';
        }else if(c[i]=='i'){
            c[i]='+';
        }else if(c[i]=='o'){
            c[i]='-';
        }else if(c[i]=='u'){
            c[i]='?';
   }
   
}
for(int i=0;i<len;i++){
   cout<<c[i];
}
}