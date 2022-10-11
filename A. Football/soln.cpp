#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;cin>>n;
   string temp;
   unordered_map<string,int> scordboard;
   while(n--){
    cin>>temp;
    scordboard[temp]++;
   }

   if(scordboard.size()==1){
    cout<<scordboard.begin()->first;
    return 0;
   }
   auto it2 = scordboard.begin(),it1=it2;it2++;



    // cout<<it2->first<<" "<<it2->second;
   if(it1->second>it2->second)
        cout<<it1->first;
    else
        cout<<it2->first;



  
}