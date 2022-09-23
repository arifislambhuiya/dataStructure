#include<bits/stdc++.h>
using namespace std;

    void minAbsSumPair(int arr[],int n){
        int l,r,sum,min_sum,min_l,min_r;
        if(n < 2){
            cout << "invalid input" << endl;
            return;
        }
        min_l = 0;
        min_r = 1;
        min_sum = arr[0] + arr[1];

        for(int l = 0; l < n; l++){
            for(r = l+1; r < n;r++){
                sum = arr[l] + arr[r];
                if(abs(min_sum) > abs(sum)){
                    min_sum = sum;
                    min_l = l;
                    min_r = r;
                }
            }
        }

        cout<<"Tow element whose sum is minimum are : " << arr[min_l] << " and : "<< arr[min_r];
    }

int main(){
    int arr[] = {3,4,-10,70,-80,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    minAbsSumPair(arr, n);

    return 0;
}