#include<bits/stdc++.h>
using namespace std;

    int getOddOccurrence(int arr[],int n){
        unordered_map<int,int> hash;

        for(int i = 0; i < n; i++){
            hash[arr[i]]++;
        }

        for(auto i:hash){
            if(i.second %2 != 0){
                return i.first;
            }
        }
        return -1;
    }


int main(){
    // int arr[] = {5, 7, 2, 7, 5, 2, 5};
    // int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int arr[] = { 2, 3, 5, 4, 5, 2, 4,
                    3, 5, 2, 4, 4, 2 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< getOddOccurrence(arr,n);


    return 0;
}