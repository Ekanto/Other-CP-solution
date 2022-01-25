#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1,n2,var;
    int sum = 0;
    cin >> n1;
    for(int i = 1;i<=n1;++i){
        cin  >> n2;
        sum = 0;
        for(int i = 1;i<=n2;++i){
            cin >> var;
            if(var < 0) continue;
            else{
                sum+=var;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }


    return 0;
}