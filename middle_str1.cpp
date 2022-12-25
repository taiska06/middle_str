#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;
long long itc_len(string str){
     int kol,i;
     kol=0;
     i=0;
     while(str [i]!= '\0'){
      kol++;
      i++;
 }
 return kol;
 }
 bool itc_isDigit(unsigned char c){
     int a;
     if(c >= 48 && c <= 57)
        return 1;
     else
        return 0;
 }
unsigned char itc_toUpper(unsigned char c){
    if(c>=97 && c<=122)
        return c-32;
    else
        return c;
}
unsigned char itc_changeCase(unsigned char c){
    if(c>=97 && c<=122)
        return c-32;
     if(c>=65 && c<=90)
        return c+32;
    else
        return c;

}
bool itc_compare(string s1, string s2) {
    long long lenght1 = itc_len(s1);
    long long lenght2 = itc_len(s2);
    int a;
    for (int i = 0; i < lenght2 || i<lenght1; i++){
        if (s1[i] != s2[i])
            a++;
}
    if(a>0)
            return 0;
    return 1;
}
int itc_countWords(string str){
long long lenght = itc_len(str);
int amount = 0;
        for(int i=0;i<lenght;i++){
                if(str[i] == ' ' ) {
                amount++;
            }
        }
        return amount;
}







