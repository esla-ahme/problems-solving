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
    int arr[n];
    string s;
    unordered_map<int,char> NumAlpha;
    for( int i=0;i<n;i++){
      cin>>arr[i];
    } 
    cin>>s;
    bool flag = true;
    for(int i=0;i<n;i++){
      if(NumAlpha.count(arr[i]) && NumAlpha[arr[i]]!=s[i]){
        cout<<"NO"<<endl;
        flag = false;
        break;
      }
      else{
        NumAlpha[arr[i]]=s[i];
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    
  } 
 return 0;
}

