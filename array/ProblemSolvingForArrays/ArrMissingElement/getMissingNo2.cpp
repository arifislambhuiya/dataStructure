//Find the missing element of an array using sum method

#include<bits/stdc++.h>
using namespace std;

    int getMissingNo(int arr[],int n){
        int i,total = 1;
        for(i = 2;i<=(n+1);i++){
            total += i;
            total -= arr[i-2];
        }

        return total;
    }

int main(){
    int arr[] = {1,2,3,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<getMissingNo(arr,n);

    return 0;
}