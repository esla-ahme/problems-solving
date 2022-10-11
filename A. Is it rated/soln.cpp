#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r1,r2,p1=4127,p2=4127; cin>>n;
    bool changed = false,desc=true;
    while(n--){
        cin>>r1>>r2;
        if(r1 != r2 ) {
            changed = true;
            break;
        }
        if(p1<r1||p2<r2){
            desc = false;
        }
        p1 = r1 ; p2 = r2;
        
    }
    if(changed) cout<<"rated";
    else if(!desc) cout<<"unrated";
    else cout<<"maybe";

}