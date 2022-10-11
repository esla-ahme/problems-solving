#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   short r1,r2,c1,c2,d1,d2,results[4];
   cin>>r1>>r2>>c1>>c2>>d1>>d2;

   if( (r1+c1-d2)%2||(r2+c2-d2)%2){
        cout<<-1;
        return 0;
   }
   results[0] = (r1+c1-d2)/2;
    results[3]=(r2+c2-d2)/2;
    results[1] = c2-results[3];
    results[2]=c1-results[0];
    for(int i = 0 ; i < 4 ;i++){
        if(results[i]<1||results[i]>9)
        {
            cout<<-1;
            return 0;
        }
        for(int j = i+1 ; j<4;j++)
            if(results[i]==results[j]){
                 cout<<-1;
            return 0;
            }
    }
    
    printf("%hi %hi\n%hi %hi",results[0],results[1],results[2],results[3]);
  
}