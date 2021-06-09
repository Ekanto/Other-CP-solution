#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){

    double rad,cirarea,pi,a,sqarea;
    long double bluarea;
    int n,i;
    cin >> n;
    for(i=1;i<=n;i++){
    cin >> rad;
    pi = acos(-1); cirarea = pi*rad*rad;
    a = rad*2; sqarea = a*a;
    bluarea = sqarea - cirarea;
    cout  << "Case " << i << ": " << setprecision(2) << fixed <<  bluarea << endl;
       
    }
    return 0; 

}