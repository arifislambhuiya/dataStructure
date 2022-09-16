#include<bits/stdc++.h>
using namespace std;

   int getOddOccurrence(int arr[],int n){
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j <n; j++){
                if(arr[i] == arr[j])
                    count++;
            }
            if(count % 2 != 0){
                return arr[i];
            }
        }

        return -1;
    }

int main(){
    // int arr[] = {5, 7, 2, 7, 5, 2, 5};
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< getOddOccurrence(arr,n);

    return 0;
}