#include <iostream>
#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    short t,n;cin>>t;
        while (t--)
        {
            cin>>n;
            short a[n],b[n],a1=0,b1=0,diff=0;
            for (size_t i = 0; i < n; i++)
            {
                cin>>a[i];
            }
            for (size_t i = 0; i < n; i++)
            {
                cin>>b[i];
                if(a[i])a1++;
                if(b[i])b1++;
                if(a[i]!=b[i])diff++;
            }
            diff= diff>abs(a1-b1)?1:0;
            cout<<diff+abs(a1-b1)<<endl;
            
            /* code */
        }
    
  
}