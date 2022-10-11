#include <iostream>
#include <unordered_map>

using namespace std;
int main(){
    int len,mutations;
    string s;
    cin>>len>>mutations;
    string brand;
    cin>>brand;
    unordered_map<char,char> swaps;
    char ch1,ch2;
    for(int i = 0 ; i < mutations ; i++){
        cin>>ch1>>ch2;
        if (ch1==ch2) continue;
        bool existed[2] ={false,false} ;
        for(auto const& swap : swaps){
            if(swap.second == ch1){
                swaps[swap.first] = ch2;
                existed[0] = true;
            }
            else if (swap.second==ch2){
                swaps[swap.first] = ch1;
                existed[1] = true;

            }
        }
        if(!existed[0]){
            swaps[ch1] = ch2;
        }
        
        if(!existed[1]){
            swaps[ch2] = ch1;
        }
    }


   for (int i = 0; i <len ; i++ ){
        if (swaps.find(brand[i]) != swaps.end()){
            brand[i] = swaps[brand[i]];
        }
   }
    cout << brand<<endl;
    return 0 ;
}

/**
 * 
a b
b c
a d
e g
f a
b b
 * 
 */
/*
a => _b c
b => d
c => b
d => _a f
e => g
g => e
f => a

*/

