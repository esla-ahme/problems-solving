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
    vector<int> arr(n);
    bool hasOne=false;
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (n==1 || is_sorted(arr.begin(),arr.end()))
    {
        cout<<"0"<<endl;
        continue;
    }
    int count = 0;
    // 2 pointers approach
    int l = 0, r = n-1;
    while (l < r)
    {
        if (arr[l] == 1 && arr[r] == 0)
        {
            count++;
            l++;
            r--;
        }
        else if (arr[l] == 0)
        {
            l++;
        }
        else if (arr[r] == 1)
        {
            r--;
        }
    }
    cout<<count<<endl;
  } 
 return 0;
}
// 1 1 0 0 1 0 0 1 1 1 0
