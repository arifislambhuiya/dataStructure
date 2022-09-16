#include<bits/stdc++.h>
using namespace std;

void rotateArr(int arr[],int d , int n){
   int p = 1;
   while(p<=d){
    int last = arr[0];
    for(int i = 0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = last;
    p++;
   }
}

void printArr(int arr[],int n){
     for(int i = 0;i < n;i++){
        cout<<arr[i]<< " ";
     }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 7;

    rotateArr(arr,d,n);
    printArr(arr,n);
    return 0;

}