#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,x1,x2,y1,y2,c,c1,c2,cnt = 0;
    scanf("%d",&t);
    while(t--){
    cnt++;
    cout << "Case " << cnt << ":" << endl;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    scanf("%d",&c);
    for(int i = 0;i<c;++i){
        scanf("%d %d",&c1,&c2);
        if((c1 > x1) && (c2 > y1) && (c1 < x2) && (c2 < y2)) cout << "Yes" << endl;
        else{
            cout << "No" << endl;
        }

    }
    
    }

}