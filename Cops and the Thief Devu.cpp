#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,cnt1(0),cnt2(0);
    char ch[101];
    cin >> t;
    while(t--){
        cin >> ch;
        int l = strlen(ch);
        cnt1 = 0,cnt2 = 0;
        for(int i = 0;i<l;++i){
            if(ch[i] == 'a') cnt1++;
            if(ch[i] == 'b') cnt2++;
        }
        if(cnt1 == cnt2) cout << cnt2 << "\n";
        if(!cnt2) cout << 0 << "\n";
        if(!cnt1) cout << 0 << "\n";
        if(cnt1 > cnt2 && cnt2 !=0 ) cout << cnt2 << "\n";
        if(cnt2 > cnt1 && cnt1 !=0 ) cout << cnt1 << "\n";
    }

   
}