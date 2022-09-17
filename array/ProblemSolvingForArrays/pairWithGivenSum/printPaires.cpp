#include<bits/stdc++.h>
using namespace std;

    void printPairs(int arr[],int n,int x){
        unordered_set<int>s;
        for(int i = 0; i < n;i++){
            int temp = x - arr[i];

            if(s.find(temp) != s.end())
                cout<<" pair with given sum " << x << " is (" << arr[i] << "," <<  temp << ")" << endl;
            s.insert(arr[i]) ;
        }
    }

int main(){

    
    int arr[] = { 1, 4, 45, 6, 10, -8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 16;

     printPairs(arr, n, x);
    return 0;
}