#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;
string itc_maxCharWord(string str){
long long length = itc_len(str);
int rp = 0;
    int sp = 0;
    int count_of_symbols = 0;
    int max = 0;
    int word_num = 0;
    string str1;
    int word_m = 0;
    for (int i = 0; i < length; i++) {
        if ((((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) || ((str[i] == '\'') && (((str[i+1] >= 'a' && str[i] <= 'z') || (str[i+1] >= 'A' && str[i] <= 'Z'))))))
            count_of_symbols++;
        if (count_of_symbols > max) {
            max = count_of_symbols;
            sp = i;
            rp = sp - count_of_symbols+1;
            word_m = word_num + 1;
        }
        if ((i + 1 == length) || (str[i + 1] == ' ' || str[i + 1] == '.' || str[i + 1] == '!' || str[i + 1] == '?')) {
            count_of_symbols = 0;
             word_num++;
        }
    }
    for (int i = rp; i <= sp; i++) {
        str1+=str[i];
    }
    long long length1 = itc_len(str1);
    if(length1==length){
        return "error";
    }else{
    return str1;
    }
}
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
      }
    }
  }
  for(int i=0;i<length;i++){
    if(str[i]==str[i+1]){
        return str[i];
    }
  }
}

bool itc_isFirstInSecond(string s1, string s2){
    int length2=itc_len(s2);
    int length1=itc_len(s1);
    int a = -1;
    int j = 0;
    if (length2 > length1){
        return -1;

    }
  for (int i = 0; i < length1; i++) {
        if (  j >= length2)
            break;
        if (s1[i] == s2[j]) {
            if (j == 0)
                a = i;
                 j++;
        }
        else {
            a = -1;
            j = 0;
        }
    }
    return a;

}








