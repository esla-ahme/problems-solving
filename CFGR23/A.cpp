#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <numeric>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
    int n,k;cin>>n>>k;
    int arr[n];
    bool hasOne=false;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
        if(arr[i]==1) hasOne=true;
    }
    if(!hasOne){
        cout<<"NO"<<endl;
        continue;
    }
    cout << "YES" << endl;
    
  } 
 return 0;
}

/**
 * @brief 
 * 1 0 0 0 0 0
 * 
 */