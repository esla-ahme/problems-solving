#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <numeric>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
    int n; cin>>n;
    int arr[n];
    set<int> uniSet;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        uniSet.insert(arr[i]);
    }

    if(uniSet.size()!=n)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

  } 
 return 0;
}