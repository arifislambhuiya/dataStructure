#include<bits/stdc++.h>
using namespace std;

    int findMinDist(int arr[],int n,int x,int y){
        int idx1 = -1,idx2 = -1, min_dist = INT_MAX;
        for(int i = 0; i < n; i++){
            if(arr[i] == x){
                idx1 = i;
            }
            if(arr[i] == y){
                idx2 = i;
            }

            if(idx1 != -1 && idx2 != -1){
                min_dist = min(min_dist,abs(idx1 - idx2));
            }

           
        }
        if(idx1== -1 && idx2== -1){
                return -1;
            }
            else{
                return min_dist;
        }      
            
    }



int main(){
    int arr[] = { 3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3, y = 6;
    cout<<"Min_dist between "<< x <<" and "<< y <<" is "<< findMinDist(arr,n,x,y)<<endl;

    return 0;
}