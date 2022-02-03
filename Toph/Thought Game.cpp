#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        int x = (a+b) / 2;
        int res = floor(x);
        if(res % 2 == 0) cout << "Sadia will be happy." << endl;
        else{
            cout << "Oops!" << endl;
        }
        }
}