#include<stdio.h>
#define SIZE 5
void dequeue(int queue[],int *front ,int *rear){
	if(*front ==-1 || *front>*rear){
		printf("Queue is empty! insertion is not possible.\n");
	    *front= -1;
	    *rear=-1;
	    return ;
	}
	printf("%d deleted from the queue.\n",queue[*front]);
	(*front)++;
	if(*front>*rear){
		*front=-1;
		*rear=-1;
	}
	
}
int main(){
	int queue[SIZE]={10,20,30,40,50};
	int front =0,rear=4;
	dequeue(queue,&front,&rear);
	dequeue(queue,&front,&rear);
	dequeue(queue,&front,&rear);
	dequeue(queue,&front,&rear);
	dequeue(queue,&front,&rear);
	dequeue(queue,&front,&rear);
	return 0;
}

