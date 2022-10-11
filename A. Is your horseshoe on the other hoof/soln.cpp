#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    int sh;
    cin>>sh; s.insert(sh);
    cin>>sh; s.insert(sh);
    cin>>sh; s.insert(sh);
    cin>>sh; s.insert(sh);
    cout<<4-s.size();
    return 0;
}