#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,a,b;
    cin >> t;
    for(int i = 1;i<=t;++i){
        cin >> a >> b;
        if(a<b || a == b){
            int door = 9, inout = 10, sum = 0, floor = 4;
            while(b--){
                sum = sum + floor;
            }
            cout << "Case " << i <<":" << " " << inout+sum+door << endl;
        }
        else{
            if(a>b){
                int door = 9, inout = 10, sum = 0, floor = 4;
                while(b!=a){
                    b++;
                    sum = sum+floor;
            }
                while(b--){
                    sum = sum+floor;
            }
            cout << "Case " << i <<":" << " " << inout+sum+door << endl;

        }

    }

    }
}