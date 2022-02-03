#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,flag;
    int sum1 = 0,sum2 = 0,cnt = 0;
    cin >> t;
    char arr[101];
    for(int i = 0 ;i<t;++i){
        cnt = 0;      
        cin >> arr;
        int l = strlen(arr);
        for(int j = 0;j<=l-1;++j){
            if(arr[j] == 'N' | arr[j] == 'W' | arr[j] == 'D') continue;
            else{
                cnt++;
            }
            if(cnt >= 6){
                if(cnt % 6  == 0)
                flag = 1;
                else if(cnt%6!= 0){
                    flag = 2;
                }
            }
            else{
                flag = 3;

            }           
        }
        int over  = cnt / 6;
        int oballs  = cnt % 6;
        int balls = cnt;
        if(flag == 1 && over > 1) cout << over << " " << "OVERS" << endl;
        else if(flag ==1 && over  == 1){
            cout << over << " " << "OVER" << endl;
        }
        if(flag == 2 && over == 1 && oballs == 1) cout << over << " " << "OVER" << " " << oballs << " " << "BALL" << endl;
        else if(flag == 2 && over > 1 && oballs == 1){
            cout << over << " " << "OVERS" << " " << oballs << " " << "BALL" << endl;
        }
         else if(flag == 2 && over ==1 && oballs > 1){
            cout << over << " " << "OVER" << " " << oballs << " " << "BALLS" << endl;
        }
         else if(flag == 2 && over > 1 && oballs > 1){
            cout << over << " " << "OVERS" << " " << oballs << " " << "BALLS" << endl;
        }

        if(flag ==3 && balls > 1) cout << cnt << " " << "BALLS" << endl;                        
    }    
}