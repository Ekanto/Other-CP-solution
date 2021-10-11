#include<bits/stdc++.h>

#define ln "\n"
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 20) cout << n-10 << " " << n-10 << ln;
        else{
            cout << n % 10 << " " << n - (n%10) << ln;
        }
        
    }


}