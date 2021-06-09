#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a,b,c;
    cin >> n;
    for(int i=1;i<=n;++i){
    cin >> a >> b >> c;
    if((a*a+b*b == c*c) || (a*a+c*c == b*b) || (b*b+c*c) == a*a){
        cout << "Case " << i << ": " << "yes" << endl;
    }
    else{
        cout << "Case " << i << ": " << "no" << endl;
    }
 

    }
    return 0;
}