#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   char dir; cin>>dir;
   string cipher; cin>>cipher;
   string keyboard ="qwertyuiopasdfghjkl;zxcvbnm,./"; 
   map<char,char> map;
   int shift;
   dir == 'L'?shift = 1:shift=-1;
   for(
    int i = shift==-1; i < keyboard.length()-( shift==1);i++ 
   ){
    map[keyboard[i]] = keyboard[i+shift];
   }
   for(int i = 0 ; i< cipher.length();i++){
    cipher[i] = map[cipher[i]];
   }
   cout<<cipher;
   return 0;
}