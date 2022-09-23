#include<bits/stdc++.h>
using namespace std;

    int findMinDiff(int arr[],int n){
        int diff =  INT_MAX;

        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(abs(arr[i] - arr[j]) < diff){
                    diff = abs(arr[i] - arr[j]);
                }
            }
        }
        return diff;
    }


int main(){
    int arr[] = {1,4,5,7,3,19,18,25};
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum difference is " << findMinDiff(arr,n);

    return 0;
}