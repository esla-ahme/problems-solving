#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        unordered_map<string,vector<int>> wordspace;
        for (int i = 0 ; i < 3 ; i++){
            for (int j = 0 ; j < n ; j++){
                string word;
                cin>>word;
                wordspace[word].push_back(i);
            }
        }
        int scores[3] = {0,0,0};
        for(auto &x:wordspace){
            if (x.second.size()==3) continue;
            if (x.second.size()==1) scores[x.second[0]]+=3;
            else {
                scores[x.second[0]]+=1;
                scores[x.second[1]]+=1;
            }
        }
        for (int k = 0 ; k<3 ;k++ ){
            cout<<scores[k]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}