#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    char period[] ={'8','4','2','6'};
    if (n ==0)cout<<1;
    else {
        cout<<period[(n-1)%4];
    }
}