#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,cnt = 0;
    scanf("%d %d",&x,&y);
    while(y%x != 0){
        y++;
        cnt++;
    }
    cout << cnt << endl;

}