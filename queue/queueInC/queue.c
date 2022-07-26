#include<stdio.h>

#define MAX 5

int items[MAX] ;
int front = -1;
int rear = -1;

//enQueue function
void enQueue(int value){
    if (rear == MAX -1){
        printf("The queue is full.\n");
    }else{

        if(front == -1)
            front = 0;
            rear++;
            items[rear] = value;
        
    }
}

//dequeue function
void deQueue(){
    if(front == -1){
        printf("The queue is empty.\n");
    }else{
        front++;
        if(front > rear)
        front = rear = -1;
    }
}

// printf enQueue function
void displayQueue(){
      if(rear == -1){
          printf("The queue is empty.\n");
      }else{
          int i;
          for(i = front; i<=rear; i++){
              printf("%d\n", items[i]);
          }
      }
}



int main(){

 enQueue(4);
 enQueue(5);
 enQueue(6);
 enQueue(7);

 displayQueue();

 printf("After dequeue;\n");
 
 deQueue();
 displayQueue();
    return 0;
}

