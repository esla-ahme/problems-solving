#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   long long n , k,numOfOdds,output;
   
   cin>>n>>k;
   numOfOdds=n%2==0?n/2:(n+1)/2;
   output=k>numOfOdds?2*(k-numOfOdds):2*k-1;
   cout<<output;
   return 0;
}