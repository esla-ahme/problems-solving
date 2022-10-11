#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,target,temp; cin>>n;
    target =n ;
    set<int> store;
    while(n--){
        cin>>temp;
        store.insert(temp);
        set<int>::iterator it = store.end();
        it--;
        while(*it==target ){

            cout<<*it<<" ";
            store.erase(it--);        
            target--;
        }
        cout<<endl;
    }
    
    return 0;
}