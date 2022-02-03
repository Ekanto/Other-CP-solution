#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c,low;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    if( a<b && a<c ){
         low = a;
    }
    else if(b<a && b<c){
         low =b;
    }
    else if (c<a && c<b)
    {
        low  = c;
    }
    if(n - low >= 10) cout << "Yes :-D" << endl;
    else{
        cout << "No :-(" << endl;
    }
    
}