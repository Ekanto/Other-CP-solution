#include<iostream>

using namespace std;

int main(){
    int n,tar;
    cin >> n >> tar;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];        
    }
    int i,start = 0,last  = n-1;
    while(start<=last){
        int mid=(start+last)/2;

        if(arr[mid]==tar){
            cout << mid;
            break;
        }
        else if (tar<arr[mid])
        {
            last = mid-1;
        }
        else{
            start = mid+1;
        }   
    }
    if(start>last) cout <<start;
    
}