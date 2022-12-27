#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;
string itc_Cezar(string str, int k){
long long length = itc_len(str);
string str1;
int c=0;
int d=0;
for(int i=0;i<length;i++){
      if(str[i]+k <'a' && str[i]+k <='z' ){
          while(str[i]>'a'){
                d++;
                i++;
            }
            str[i]='z';
            int n=k*(-1)-d;
            str1+=str[i]-n+1;
      }
     else if(str[i]+k >'z' && str[i]+k >'a'){
            while(str[i]<'z'){
                c++;
                i++;
            }
           str[i]='a';
           int n=k-c;
            str1+=str[i]+n-1;
        }else{
   str1+=str[i]+k;
        }
   }
return str1;
}
string itc_rmFreeSpace(string str){
long long length = itc_len(str);
string S2;
for(int i=0;i<length;i++){
    if(str[i]!=' '){
        S2+=str[i];
    }
     if(str[i]==' ' && str[i+1]==' ')
            i++;
    if(str[i]==' ' && str[i+1]!=' '){
        S2+=' ';
}}
return S2;
}
bool itc_isIp(string str){
long long length = itc_len(str);
int c=0;
int n=0;
for(int i=0;i<length;i++){
    if(str[i]>=48 && str[i]<=57){
        c++;
    }
        if(c<=3 && c>0 && str[c+1]=='.'){
          n++;
}}
if(n==3){
    return 1;
}
}

string perezapis(string str){
    long long length=itc_len(str);
    string rez="";
  //  cout<<rez << endl;
    for(int i=0;i<length;i++){
        rez+=str[i];
    }
    rez+="\0";
return rez;
}


string itc_maxCharWord(string str){
long long length = itc_len(str);
string new_str="";
int i,maxi=0;
string rez="";
for(i=0; i<length;i++){
    if(str[i]!=' '){
        new_str+=str[i];
    }else{
        new_str+='\0';
        long long length1 = itc_len(new_str);
        if(length1>maxi && st_number(new_str)){
                rez = "";
                rez = perezapis(new_str);
                maxi=length1;
        }
        new_str="";
    }}
        new_str+='\0';
        long long length1 = itc_len(new_str);
        if(length1>maxi && st_number(new_str)){
                rez = "";
                rez = perezapis(new_str);}
    return rez;
}


bool st_number(string str){
int i;
long long length=itc_len(str);
for(i=0;i<length;i++){
    if (!(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]>='z')){
        return false;
    }}
return true;
}

