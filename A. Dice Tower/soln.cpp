#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,top,bottom,l,r;
    bool sides [6]= {false};
    cin>>n>>top;

    while(n--){
        cin>>l>>r;
        if(l==top||r==top||(7-r)==top||(7-l)==top){
               cout<<"NO";
               return 0;
        }
         top = 7-top;
    }
    cout<<"YES";
  
}