#include<bits/stdc++.h>
using namespace std;

    void printLeader(int arr[],int n){
        // create a stack to store leader
        stack<int>s;
        s.push(arr[n-1]);
        for(int i = n-2;i>=0;i--){
            if(arr[i] > s.top()){
                s.push(arr[i]);
            }
        }
        // print stack element
        // run loop til stack is not empty
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }

int main(){

    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeader(arr,n);

    return 0;
}