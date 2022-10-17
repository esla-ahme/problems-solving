#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <numeric>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
    int n;cin>>n;
    n =10-n;
    string s; 
    cin.ignore();
    getline(cin,s);
    cout<<n*(n-1)*6/2<<endl;
    
  } 
 return 0;
}

