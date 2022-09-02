#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(vector<int> &hT,int i){
    int size = hT.size();
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
     if(l<size && hT[l]>hT[largest]){
        largest = l;
     }

     if(r<size && hT[r]>hT[largest]){
        largest = r;
     }


     if(largest != i){
        swap(&hT[i],&hT[largest]);
        heapify(hT,largest);
     }

}

void insert(vector<int> &hT,int newNum){
    int size = hT.size();
    if(size==0){
        hT.push_back(newNum);
    }else{
        hT.push_back(newNum);
        for(int i = size/2-1;i>=0;i--){
            heapify(hT,i);
        }
    }
}


void printHepa(vector<int> &hT){
    for(int i=0;i<hT.size();i++){
        cout<<hT[i]<<" ";
    }

}

int main(){

    vector<int> heapTree;
    insert(heapTree,10);
    insert(heapTree,15);
    insert(heapTree,21);
    insert(heapTree,30);
    insert(heapTree,18);
    insert(heapTree,19);


    printHepa(heapTree);


    return 0;
}