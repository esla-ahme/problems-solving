#include <iostream>
#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
     string sizes = "SML";
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length() == s2.length()){
        if(s1.back()==s2.back()){ cout<<"="<<endl;
        continue;}

        if(sizes.find(s1.back())>sizes.find(s2.back())){
            cout<<">"<<endl;
        continue;
        }
        else {
            cout<<"<"<<endl;
        continue;
        }

    }
    else {
        if(sizes.find(s1.back())>sizes.find(s2.back())){
            cout<<">"<<endl;
        continue;
        }
        else if  (sizes.find(s1.back())<sizes.find(s2.back())){
            cout<<"<"<<endl;
        continue;
        }
        else {
            if((s1.back()=='L'&&s1.length()>s2.length())||(s1.back()=='S'&&s1.length()<s2.length())){
                 cout<<">"<<endl;
        continue;
            }
            else {
                 cout<<"<"<<endl;
        continue;
            }
        }
    }

  }
  
 return 0;
}