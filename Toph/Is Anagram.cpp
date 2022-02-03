#include<bits/stdc++.h>

  using namespace std;

  int main(){
        std::ios::sync_with_stdio(false); 
        int flag;
        char str1[101];
        char str2[101];
        cin >> str1;
        cin >> str2;
        int l1 = strlen(str1);
        int l2 = strlen(str2);
        if(l1 != l2) cout << "No";
        else{
          sort(str1,str1+l1);
          sort(str2,str2+l2);
          for(int i = 0;i<l1-1;++i){
            if(str1[i] == str2[i]){
              flag = 1;
            }
            else{
              flag = 2;
            }            
          }
          if(flag == 1)  cout << "Yes";
          if (flag == 2) cout << "No";     
        }

        
  }