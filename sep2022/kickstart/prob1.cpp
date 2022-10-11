#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
 
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
// Many of the solutions require mod by 10e^9+7
#define MOD 1000000007
// The least significant bit
#define LSB(i) ((i) & -(i))
 
using namespace std;
 
 class Fabric{
    string color;
    int du,id;
    public:
        Fabric(string c,int d,int i){
            color = c;
            du = d;
            id = i;
        }
        int getDu(){
            return du;
        }
        int getId(){
            return id;
        }
        string getColor(){
            return color;
        }
 }; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int N; cin >> N;
        vector<Fabric> fabrics();
        string color;
        int du,id;
        for (auto fabric = 0 ; fabric <N; fabric++){
            cin>>color>>du>>id;
            Fabric* fab = new Fabric(color,du,id);
            fabrics.push_back(fab);
        }

        vector <Fabric> fabrics2(fabrics);
        
        for (int fab = 1 ; fab <=N; fab++){
            cout << fabrics[fab].getColor();
        }

        
        auto ans = 0;
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // cout >> std::setprecision(8);
        cout << "Case #" << case_num << ": " << ans << endl;
    }
    return 0;
}