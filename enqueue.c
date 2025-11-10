#include<stdio.h>
#define SIZE 5
void enqueue(int queue[],int *front ,int *rear,int item){
	if(*rear ==SIZE-1){
		printf("Queue is FULL! insertion is not possible");
		return;
	}
	if(*front== -1){
		*front =0;
	}
	(*rear)++;
	queue[*rear]=item;
	printf("%d inserted into the queue.\n",item);
	
}
int main(){
	int queue[SIZE];
	int front =-1,rear=-1;
	enqueue(queue,&front,&rear,10);
	enqueue(queue,&front,&rear,20);
	enqueue(queue,&front,&rear,30);
	enqueue(queue,&front,&rear,40);
	enqueue(queue,&front,&rear,50);
	return 0;
}

