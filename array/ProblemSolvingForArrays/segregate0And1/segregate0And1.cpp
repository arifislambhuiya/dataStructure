#include <bits/stdc++.h>
using namespace std;
    
    void segregate0And1(int arr[],int n){
        int count = 0;

        for(int i = 0; i < n; i++)
            if(arr[i]==0)
                count++;

        for(int i= 0; i <count; i++)
            arr[i] = 0;
        
        for(int i = count; i < n; i++)
            arr[i] = 1;
        

    }

    void printArr(int arr[],int n){
        for(int i = 0; i < n; i++)
            cout<< arr[i];
    }

int main(){
    int arr[] = {0,1,1,0,0,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    segregate0And1(arr,n);
    printArr(arr,n);
    return 0;
}