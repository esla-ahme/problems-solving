#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
string query(unsigned long long a,unsigned long long b);
int main(){
   int count = 50;

   unsigned long long distance1,distance2;
   unsigned long long a=1,b=3   ; 
    while(count-=2){
    cout<< query(a,b);
    cin>>distance1;
    if (distance1==-1){
        printf("! %llu",b-1);
        return 0;
    }
    cout<< query(b,a);
    cin>>distance2;
    if(distance1!=distance2){
        unsigned long long distance = distance1+distance2;
         printf("! %llu",distance);
        return 0;
    }
    b++;
    
    

}
    return 0;
}


string query(unsigned long long a,unsigned long long b){
    return "? " + to_string(a) + ' ' + to_string(b) + '\n';
}

/**
551
3 => 1000
3 => 500
500 => 750
500 625
500 562
500 531

*/