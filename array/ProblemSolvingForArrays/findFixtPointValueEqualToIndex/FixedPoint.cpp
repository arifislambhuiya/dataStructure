#include<bits/stdc++.h>
using namespace std;

    int fixedPoint(int arr[],int low,int high){
        while(high >= low){
            int mid = low + (high - low)/2;
            if(mid == arr[mid]){
                return mid;
            }
            int res = -1;
            if(mid + 1 <= arr[high]){
                res = fixedPoint(arr,(mid + 1),high);
            }
            if(res != -1){
                return res;
            }

            if(mid-1 >=arr[low]){
                return fixedPoint(arr,low,(mid-1));
            }
        }
        return -1;
    }

int main(){
    int arr[] = { -10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"fixed point is : "<<fixedPoint(arr,0,n-1);

    return 0;
}