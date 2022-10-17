#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <numeric>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
    int n,q;cin>>n>>q;
    int odd=0,even=0;
    long long int arr[n];
    long long int sum=0;
    for (size_t i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
      if(arr[i]%2==0){
        even++;
      }
      else{
        odd++;
      }
      sum += arr[i];
    }
    
    for(int i = 0 ; i < q ; i++){
      long long type,inc;cin>>type>>inc;
      if(type == 0){
        sum = sum + even*inc; 
        if(inc%2!=0){
         odd += even;
         even = 0;
        }
      }
      else{
        sum = sum + odd*inc;
        if(inc%2!=0){
          even += odd;
          odd = 0;
        }
      }
      cout<<sum<<endl;
    }

    

    
  } 
 return 0;
}

