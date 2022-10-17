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
    int l=1,r=n;
    int arr[n];
    if(n%2==1){
        arr[n/2]=n;
    }
    for(int i = 0;i<n/2;i++){
        arr[i]=l++;
        arr[n-1-i]=l++;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  } 
 return 0;
}

