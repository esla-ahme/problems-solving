#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int dim,i=0,j=0; cin>>dim;
   bool flag = true;
   char X,O;
   string A;
   for(int k = 0 ; k<dim ; k++){
    i = 0 ; j=dim-1;
    cin>>A;
    if(k==0){
        X=A[0];
        O=A[1];
        if(X==O){
            cout<<"NO";
            return 0;
        }
    }
    while(i<=j){
        if(i==k || j==k) {
            if(A[i] != A[j] || A[i] != X){
                cout<<"NO";
                return 0;
            }
        }else if(A[i]!=O || A[j]!=O){
            cout<<"NO";
                return 0;
        }
    i++;j--;
    }

   }

    cout<<"YES";
}