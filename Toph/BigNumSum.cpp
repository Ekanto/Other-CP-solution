#include<bits/stdc++.h>

using namespace std;

string sum(string s1, string s2){
    int l1 = s1.length();
    int l2 = s2.length();
    if(l1>l2){
        swap(s1,s2);
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    int carry=0;

    string str="";

    for(int i=0;i<l1;++i){
        int sum = (s1[i] - '0' + s2[i] - '0')+carry;
        str.push_back(sum%10 +'0');
        carry = sum/10;
    }

    for(int i=l1;i<l2;++i){
        int sum = ((s2[i] - '0') + carry);
        str.push_back(sum%10+'0');
        carry=sum/10;
    }

    if(carry){
        str.push_back(carry+'0');
    }

    reverse(str.begin(),str.end());

    return str;
}

int main(){
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    cout << sum(s1,s2);
}