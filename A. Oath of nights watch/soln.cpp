#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> stewards(n);
    for(int i = 0 ; i < n ; i++){
        cin>>stewards[i];
    }
int count = 0;
    const auto [min,max] = minmax_element(stewards.begin(),stewards.end());
     for(int i = 0 ; i < n ; i++){
        if (stewards[i]>*min&&stewards[i]<*max) count++;
    }
    
    cout<<count;
    return 0;
}