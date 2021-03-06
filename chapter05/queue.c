#include <stdio.h>
#define QUEUE_SIZE 100
int queue[QUEUE_SIZE];
int rear = -1;
int front = -1;
void print_queue();
void addq(int item);
int deleteq();

void main(){
    int temp;

    addq(3);
    addq(5);
    addq(7);
    temp = deleteq();
    print_queue();
}

void addq(int item){
    if(rear == QUEUE_SIZE - 1) { // queue full
        printf("Queue Full. item not added");
        return;
    }
    queue[++rear] = item;
    print_queue();
}

int deleteq(){
    if(front == rear){
        printf("Queue empty");
        return -999;
    }
    return queue[++front];
}

void print_queue(){
    int i;
    for(i = front + 1; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}