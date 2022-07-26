#include <stdio.h>
#include <stdlib.h>

struct node {
   int key;
   struct node *left, *right;
};

struct node *createNode(int key){
    
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key = key;
    newNode->left = newNode->right =NULL;

    return newNode;
}





int main(){




    return 0;
}