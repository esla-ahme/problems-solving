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
    char currentState; cin>>currentState;
    string pattern; cin>>pattern;
    int fG=-1,lG,lS;
    int counter = 0;
    vector<int> waits;
    bool counting = false;
    if(currentState=='g'){
      cout<<0<<endl;
      continue;
    }
    for (int i = 0; i < n; i++)
    {
      if(pattern[i]=='g'){
        if (fG==-1)
        {
          fG=i;
        }
        lG=i;
        waits.push_back(counter);
        counter=0;
        counting=false;
      }
      if(pattern[i]==currentState&&counting==false){
        lS=i;
        counting=true;
      }
      if(counting){
        counter++;
      }

    }
    if(lS>lG){
      waits.push_back(n-lS+fG);
    }

    cout<<*max_element(waits.begin(),waits.end())<<endl;
    
  } 
 return 0;
}

