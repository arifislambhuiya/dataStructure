//Find the missing element of an array using sum method

#include<bits/stdc++.h>
using namespace std;

    int getMissingNo(int arr[],int n){
        int i,total;
        total = (n+1)*(n+2)/2;
        for(i=0;i<n;i++){
            total -= arr[i];
        }
        return total;
    }


int main(){

    int arr[] = {1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<getMissingNo(arr,n);
    return 0;
}