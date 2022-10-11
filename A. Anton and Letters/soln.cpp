#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string st;
    bool exist[26]={0};
    getline(cin,st);

    for(int i = 1 ; i<st.length()-1;i+=3){
        exist[st[i]-'a']=true;
    }
    int count=0;
    for (size_t i = 0; i < 26; i++)
    {
        exist[i]&&count++;
    }
    
    cout<<count;

    return 0;
}