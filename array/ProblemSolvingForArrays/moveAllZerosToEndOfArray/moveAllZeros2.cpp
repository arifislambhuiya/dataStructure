#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {5, 6, 0, 4, 6, 0, 9, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }

    }

    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}