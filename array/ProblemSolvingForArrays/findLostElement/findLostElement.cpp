#include<bits/stdc++.h>
using namespace std;

    int findMissUtil(int arr[],int arr2[],int n){

        if(n==1)
            return arr[0];
        
        if(arr[0]!=arr2[0])
            return arr[0];
        
        int low = 0, high = n - 1;

        while(low < high){
            int mid = low + (high-low)/2;
            if(arr[mid]==arr2[mid])
                low = mid;
            else
                high = mid;
            
            if(low == high - 1)
                break;
        }
        return arr[high];
    }

    void findMissing(int arr[],int arr2[],int m,int n){

        if(n == m-1){
            cout<<"Missing Element is: "<<findMissUtil(arr,arr2,m)<<endl;
        }else if(m == n-1){
            cout<<"Missing Element is: "<<findMissUtil(arr2,arr,n)<<endl;
        }else{
            cout<<"invalid input";
        }
    }

int main(){
    int arr[] = {2,4,6,8,9};
    int arr2[] = {1,2,4,6,8,9};

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    findMissing(arr,arr2,m,n);

    return 0;
}