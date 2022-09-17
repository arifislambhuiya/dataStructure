#include <bits/stdc++.h>
using namespace std;

    bool  hasArrayTwoCandidates(int arr[],int n, int x){
        sort(arr,arr+n);
        int left = 0, right = n-1;
        while(left<right){
            if(arr[left] + arr[right] == x)
                return 1;
            else if(arr[left] + arr[right] < x)
                left++;
            else
             right--;
        }

        return 0;
    }

int main(){

    int arr[] = { 1, 4, 45, 6, 10, -8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 16;

     if (hasArrayTwoCandidates(arr, n, x))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
 
    
    return 0;
}