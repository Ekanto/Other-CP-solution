#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int c(1),MAX=1;
    cin >> s;
    int l = s.length();
    for(int i=0;i<l;++i){
        if(s[i] == s[i+1]){
            c++;
            if(c>MAX) MAX=c;
        }
        else {
            c=1;
        }
    }
    cout << MAX;
}