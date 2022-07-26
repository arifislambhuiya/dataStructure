#include<stdio.h>
#include <stdlib.h>


#define MAX 10


struct stack {
  int items[MAX];
  int top;
};

//create empty stack
void  crateEmptyStack(struct stack *s){
    s->top = -1;
}

// chack the stack is full
int isFull(struct stack *s){
    if (s->top == MAX-1)
      return 1;
    else
      return 0;
}

// chack the stack is empty
int isEmpty(struct stack *s){
    if(s->top == -1)
    return 1;
    else
    return 0;
}

//add element into the stack
void push(struct stack *s , int items){
    if(isFull(s)){
        printf("the stack is full\n");
    }
    else{
       s->top++;
       

    }
}
//remove elememt into the stack

//print the stack

int main(){


    return 0;
}