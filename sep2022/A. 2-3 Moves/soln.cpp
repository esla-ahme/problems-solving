#include <iostream>

using namespace std;
int main(){
    int t,g,steps;
    cin>>t;
    while(t--){
       cin>>g;
       if(abs(g)==1){ cout<<2<<endl;continue;}
       if(g==0) {cout<<0<<endl;continue;}
       steps =abs(g)/3;
       if (abs(g)%3 !=0)steps++;
       
       cout<<steps<<'\n';
    }
    return 0 ;
}