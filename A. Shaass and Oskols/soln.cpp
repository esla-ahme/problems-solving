#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int wiresNum;cin>>wiresNum;
    int wiresBirds[wiresNum+2];
    for(int i= 1 ; i <= wiresNum;i++) cin>>wiresBirds[i];
    int shots; cin>>shots;
    int wire,bird;
    for (int i = i ; i < shots; i++){
        cin>>wire>>bird;
        wiresBirds[wire-1] += (bird-1);
        wiresBirds[wire+1] += wiresBirds[wire]-(bird); 
        wiresBirds[wire] = 0;
    }
    for(int i= 1 ; i <= wiresNum;i++) cout<<wiresBirds[i]<<endl;


    return 0;
}