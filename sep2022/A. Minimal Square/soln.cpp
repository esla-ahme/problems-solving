#include <iostream>

using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b){
            if(a>2*b){
                cout<<a*a<<endl;
            }
            else{
                cout<<4*b*b<<endl;
            }
        }
        else{
            if(b>2*a){
                cout<<b*b<<endl;
            }
            else{
                cout<<4*a*a<<endl;
            }
        }
    }
    return 0 ;
}