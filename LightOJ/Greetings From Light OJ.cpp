#include<iostream>
using namespace std;

int main(){
    int i,n;
    int a,b;
    cin >> n;

    for(i=1;i<=n;i++){
        cin >> a >> b;
        cout << "Case "<< i << ": " << a+b << endl;

    }

    return 0;
}