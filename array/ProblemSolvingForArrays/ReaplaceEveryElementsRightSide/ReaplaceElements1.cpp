#include <bits/stdc++.h>
using namespace std;

    void nextGreatest(int arr[],int n){
        int maxFromRight = -1;
        for(int i = n-1; i >= 0; i--){
            int temp = maxFromRight;
            if(arr[i] > maxFromRight){
                maxFromRight = arr[i];
            }
            arr[i] = temp;
        }
        return arr;
    }

    void printArray(int arr[],int n){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    nextGreatest (arr, n);
    cout << "The modified array is: \n";
    printArray (arr, n);
    return 0;
}

