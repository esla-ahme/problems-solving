#include <iostream>

using namespace std;
int main(){
    int len,mutations;
    string s;
    cin>>len>>mutations;
    string brand;
    cin>>brand;
    char oldCh,newCh;
    for(int i = 0 ; i < mutations ; i++){
        cin>>oldCh>>newCh;
        if(oldCh==newCh) continue;
        for(int j = 0 ; j < len ; j++){
            if(brand[j]==oldCh){
                brand[j]=newCh;
            }
            else if(brand[j]==newCh){
                brand[j]=oldCh;
            }

        }
    }
    cout << brand<<endl;
    return 0 ;
}

/*
a => c
b => d
c => b
d => f
e => g
g => e 
f => a

*/

