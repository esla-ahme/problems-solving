#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k,it=0;
    cin>>n>>k;
    string pass;
    for(int i = 0 ; i < n ; i++)
        pass += static_cast<char> (it++%k + 'a');

    cout<<pass;



    return 0;
}