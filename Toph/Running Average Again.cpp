#include<bits/stdc++.h>

using namespace std;

int main(){
    double t,num,sum = 0,cnt = 0;
    double res;
    cin >> t;
    for(int i = 1;i<=t;++i){
        cin >> num;
        sum+=num;
        res = sum / i;
        cout  << setprecision(11) << res << endl;
    }

    
}