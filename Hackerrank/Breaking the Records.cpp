#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,low = 0,high = 0,c = 0,cnt1 = 0,cnt2 = 0;    
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;++i){
        cin >> arr[i];
    }

    high = low = arr[0];
     for(int i = 1;i<n;++i){
         if( arr[i] < low){
            low = arr[i];
            cnt1++;
         }
         else if(arr[i]>high){
             high = arr[i];
             cnt2++;
         }
        
    }
    cout << cnt2 << " " << cnt1;
}
