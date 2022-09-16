#include<bits/stdc++.h>
using namespace std;

    void printIntersectionArr2(int arr1[],int arr2[],int m, int n){
        int i = 0;
        int j = 0;

        set<int> s;

        while(i < n && j < m){
            if(arr1[i]<arr2[j]){
                i++;
            }else if(arr2[j]<arr1[i]){
                j++;
            }else{
                
                s.insert(arr2[j]);
                i++;
                j++;
            }
        }
        for(auto itr:s){
            cout<<itr<<" ";
        }
    }


int main(){
     int arr1[] = {2,4,5,7,8};
     int arr2[] = {1,3,5,7,9};

     int m = sizeof(arr1)/sizeof(arr1[0]);
     int n = sizeof(arr2)/sizeof(arr2[0]);

     printIntersectionArr2(arr1, arr2, m, n);

    return 0;
}