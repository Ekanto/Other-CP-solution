#include<bits/stdc++.h>

using namespace std;

int main(){
    double  c,sum = 0,sum2 = 0,cnt = 0;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 1;i<=n;++i){
        cin >> arr[i];
        sum = sum + arr[i];
        cnt++;
        sum2 = sum / cnt; 
        cout << sum2 << fixed <<  setprecision(10) << endl;
    }
}