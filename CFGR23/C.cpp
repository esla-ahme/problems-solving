// 1 3 2 4 5 => 3

// 9 4 3 5 1 2 
// -5 -1 2 -4 1
// -5 0 2 -4 1 [3]
// -5 0 2 -2 1 [5]
// -5 0 2 1 1 [5]
// -1 0 2 1 1 [2]
// 4 0 2 1 1 [2]
// 4 0 2 1 1 [2]

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
    vector<int> arr(n),diff(n-1),suff;
    int minVal =-1000000;
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i>0){
             diff[i-1]=arr[i]-arr[i-1]<0 ? arr[i]-arr[i-1] : minVal;
             
             };
    }
    int itr=0;
    while (itr<n)
    {
        /* code */
        int minDiff = max_element(diff.begin(),diff.end())-diff.begin();
        if(*max_element(diff.begin(),diff.end())==minVal) break;
        suff.push_back( minDiff+2);
        diff[minDiff]= diff[minDiff]+itr+1 < 0 ? diff[minDiff]+itr+1 : minVal;
        
    }
    for(int i=0;i<n;i++){
        
        if(i>suff.size()) cout<<1<<" ";
        else cout<<suff[i]<<" ";
    }
    cout<<endl;

  } 
 return 0;
}
// 1 1 0 0 1 0 0 1 1 1 0
