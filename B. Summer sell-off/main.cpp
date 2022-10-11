#include <iostream>
#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    int n,f; cin>>n>>f;
    int normalSells[n],specialSells[n];
    int k,l;
    long long int sum=0;
    for(
        int i = 0 ; i < n ; i++
    ){
        cin>>k>>l;
        normalSells[i]=min(k,l);
        specialSells[i] = max(min (l-k,k),0);

    }
    sort(specialSells,specialSells+n);
    for (auto &x: normalSells) sum+=x;
    for (int i = n-1; i > n-f-1; i--)
    {
        sum+= specialSells[i];
    }
    cout<<sum;

 return 0;
}