#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target1,target2;
    cin>>target1;
    long long int steps = abs(target1);
    for(int i = 1 ; i < n ; i++){
        cin>>target2;
        // printf("%d - %d = %d\n",target2,target1,target2-target1);
        steps += abs(target2-target1);
        target1 = target2;
    }
    cout<<steps<<endl;
    return 0 ;
}




