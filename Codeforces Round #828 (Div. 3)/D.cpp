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
        int two_s = 0;
        vector<int> additions(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            while(arr[i]%2==0){
                arr[i] = arr[i]/2;
                two_s++;
            }
            additions[i] = 0;
            int t = i+1;
            while(t!=1){
                additions[i]++;
                t = t/2;
            }            
        }
        sort(additions.begin(),additions.end(),greater<int>());
        if(two_s>=n){
            cout<<0<<endl;
            continue;
            }

        
        int ops = 0;
        for(int i=0;i<n;i++){
           two_s+=additions[i];
           ops++;
            if(two_s>=n){
                cout<<ops<<endl;
                break;
            }
        }
        if(two_s<n){
            cout<<-1<<endl;
        }
  } 
 return 0;
}

