#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int cost[5],cals=0;
    string seq;
    for(int i = 0 ; i<4;i++)
        cin>>cost[i];
    
    cin>>seq;

    for(int j = 0 ; j< seq.length() ; j++){
        cals += cost[seq.at(j)-'1'];
    }
    
    cout <<cals;;
    return 0;
}