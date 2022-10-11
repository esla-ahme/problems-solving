#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int n , k; cin>>n>>k;
   string output;
   if (n == 1 && k ==10) {
    cout<<"-1";
    return 0;
   }
   int itrs = (k==10)?n/2:n;
   for(int i = 0 ; i < itrs;i++)
    output += to_string(k);

// cout<<output.length();    
if(output.length()<n) output+="0";
  cout<<output;    

  
}