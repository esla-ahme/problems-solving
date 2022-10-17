#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <numeric>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
    int a,b,c,d;cin>>a>>b>>c>>d;
    long long prod = a*b;
    for(int i = a+1 ; i <= c ; i++){
     for(int j = max(b+1,i) ; j <= d ; j++){
        if(i*j%prod==0){
          cout<<i<<" "<<j<<endl;
          goto end;
        }
     }
    }
    cout<<-1<<" "<<-1<<endl;
    end:
    continue;
  } 
 return 0;
}

