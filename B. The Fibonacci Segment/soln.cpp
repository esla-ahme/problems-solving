#include <iostream>
#include <math.h>
using namespace std;
int main(){
    while(true){
    int n, l=0,r=1,len=1;
    cin>>n;
    int seq[n];
    for(int i = 0 ; i <n ; i++)
    {
        cin>>seq[i];  
    }

    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==2&&seq[1]==1){
        cout<<2;
        return 0;
    }
    
 for(int i = 2 ; i <n ; i++)
    {
        if(seq[i]==seq[i-1]+seq[i-2]){
            r=i;
        }
        else {
            len = max(len,r-l+1);
            l=r-1;
            r=i;
        }
    }
    len = max(len,r-l+1);


    cout<<len;
    cout<<"_______________"<<endl;
    }

    return 0;
}