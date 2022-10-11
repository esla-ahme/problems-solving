#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int d ;
    cin>>d;
    double x,mn=1000000001,sm=mn,mx=1;
    
    // 1=> mx = 1, sm=10^9, mn=1
    // 2=> mx = 2, sm=10^9, mn=1
    // 1=> mx = 1, sm=10^9, mn=1
    // 1=> mx = 1, sm=10^9, mn=1
    // 1=> mx = 1, sm=10^9, mn=1
    if(d==1){
        cin>>x;
        cout<<x;
        return 0;
    }
    if(d==2){
        int temp;
        cin>>x;
        cin>>temp;
        cout<<(x+temp)/2.0;
        return 0;

    }
    while(d--){
        cin>>x;
        if(x>mx) mx = x;
        if(x<sm){
            sm = x;
            if(x<mn) {
            sm = mn;
            mn = x;}
        }
        
    }
    if((mx+mn)/2.0>sm){
cout<<sm;
    }
    else cout<< double((mx+mn)/2);
    return 0;
}


