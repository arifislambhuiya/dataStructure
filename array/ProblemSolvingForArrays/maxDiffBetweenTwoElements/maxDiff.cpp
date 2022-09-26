#include<bits/stdc++.h>
using namespace std;

    int maxDiff(int arr[],int n){
        int max_diff = arr[1] - arr[0];
        for(int i = 0; i <n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[j] - arr[i] > max_diff)
                    max_diff = arr[j] - arr[i];
            }
        }

        return max_diff;
    }


int main(){

    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
     cout << "Max difference is " << maxDiff(arr, n) << endl;

    return 0;
}