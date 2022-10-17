#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <numeric>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
    vector <int> totalSum;
    int n;cin>>n;
    int A[n];
    for(int i = 0; i <n ;i++ ){
        cin>>A[i];
    } 
    int start = 0;
    int masterSum = accumulate(A,A+n,0);
    while(start < n){
        vector<int>sums ;
        sums.push_back(accumulate(A,A+start+1,0));
        bool faliure = false;
        int pointer = 0;
        int i =start;
        int j = 1;
        while(i+j<n){
            int temp = accumulate(A+i,A+i+j,0);
            // cout<<"TEMP:"<<temp<<endl;
            if(temp>sums[0])    {
                start++;
                
                break;
            }

             if(temp==sums[pointer])    {
                i = i+j;
                sums.push_back(j);
                pointer++;
               j=1;
            }       
            else{
                j++;
            }
        }
        start++;
        if(accumulate(sums.begin(),sums.end(),0)==masterSum){
            totalSum.push_back(*max_element(sums.begin(),sums.end()));
        }
    }
        cout<<*min_element(totalSum.begin(),totalSum.end())<<endl;
  }
  
 return 0;
}