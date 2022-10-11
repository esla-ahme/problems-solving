#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string p[] = {"0/0","1/1","5/6","2/3","1/2","1/3","1/6"};
    cout<<p[a>b? a:b];
    return 0;
}
/*
1 => "1/1"
2 => 5/6
3 => 2/3
4 => 1/2
5 => 1/3
6 => 1/6
*/