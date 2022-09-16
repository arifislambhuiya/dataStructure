#include<bits/stdc++.h>
using namespace std;

int fixedPoint(int arr[],int n){
    int i;
    for(int i = 0; i < n; i++){
        if(arr[i] == i){
            return i;
        }

    }

    return -1;
}


int main(){
    // int arr[] = {-10, -5, 0, 3, 7};
    int arr[] = {0, 2, 5, 8, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Fixed Point is : "<< fixedPoint(arr,n);

    return 0;
}