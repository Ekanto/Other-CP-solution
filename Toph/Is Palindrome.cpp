#include <iostream>
using namespace std;

int main() {
  
  string str1;

  string str2;
  cin >> str1;

  for(int n = str1.length()-1; n >= 0; n--){
    str2.push_back(str1[n]);
  }
  if(str2.compare(str1) == 0) cout << "Yes" << endl;
  else{
      cout << "No" << endl;
  }
  
}