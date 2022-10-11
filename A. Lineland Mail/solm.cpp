#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,temp,mn,mx;
    cin>>a;

    int vec[a];

    for (int i = 0 ; i<a;i++){
        cin>>vec[i];
    }

    cout<<abs(vec[0]-vec[1])<<" "<<abs(vec[0]-vec[a-1])<<endl;
    for (int i = 1 ; i<a-1;i++){
        mn = min(abs(vec[i-1]-vec[i]),abs(vec[i+1]-vec[i]));
        mx = max(abs(vec[a-1]-vec[i]),abs(vec[0]-vec[i]));
        cout<<mn<<" "<<mx<<endl;
    }
    
    cout<<abs(vec[a-1]-vec[a-2])<<" "<<abs(vec[0]-vec[a-1])<<endl;



    return 0;
}
