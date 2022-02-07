#include<iostream>

using namespace std;

int main(){
    int n,t,sum=1;
    cin >> t;
    while(t--){
        sum=1;
        cin >> n;
        int arr[n-1];
        for(int i=0;i<n-1;++i){
        cin >> arr[i];
        sum=sum*arr[i]%1234567;
    }
    cout << sum << "\n";

    }


}