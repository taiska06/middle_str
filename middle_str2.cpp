#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;
char itc_sameChar(string str){
char temp;
long long length = itc_len(str);
string v;
for(char c:str)
if (c != ' ')
    v += c;
    str = v;
   for (int i = 0; i < length; i++){
     for (int j = 0; j < length - 1; j++){
      if (str[j] > str[j+ 1]){
        temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }}}
  for(int i=0;i<length;i++){
    if(str[i]==str[i+1] && str[i]!= ' '){
        return str[i];
    }}}
bool itc_isFirstInSecond(string s1, string s2){
    int length2=itc_len(s2);
    int length1=itc_len(s1);
    int a = -1;
    int j = 0;
    if (length1 > length2){
        return 0;
     }else{
  for (int i = 0; i < length1; i++) {
        if (  j >= length2)
            break;
        if (s1[i] == s2[j]) {
            if (j == 0)
                a = i;
                 j++;}
        else {
            a = -1;
            j = 0;
        }}
    return a;
    }}











