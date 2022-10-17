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
    string s; cin>>s;
    int arr[n];
    int maxUncovered = 0;
    long long int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(s[i]=='0'){
            maxUncovered=arr[i];
        }
        else {
            if(maxUncovered==0||maxUncovered<=arr[i]){
                sum+=arr[i];
            }
            else{
                sum+=maxUncovered;
                maxUncovered=arr[i];
            } 
        }
  }
    cout<<sum<<endl;
    
} 
 return 0;
}