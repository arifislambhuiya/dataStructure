#include <bits/stdc++.h>
using namespace std;

int ceilSearch(int arr[],int low,int high,int x){
    if(x==0){return -1;}
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(arr[mid]==x){return mid;}
        else if(x < arr[mid]){return mid - 1;}
        else{return mid+1;}
    }
    return low;
}


int main(){

    int arr[] = { 1, 2, 8, 10, 10, 12, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int index = ceilSearch(arr, 0, n - 1, x);
    if (index == -1)
        cout << "Ceiling of " << x
             << " doesn't exist in array ";
    else
        cout << "ceiling of " << x << " is " << arr[index];


    return 0;
}