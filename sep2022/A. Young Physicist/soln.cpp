#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[3] = {0,0,0};
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        x[0]+=a;
        x[1]+=b;
        x[2]+=c;
    }

    if (x[0]==x[1] && x[1]==x[2] && x[2] == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}