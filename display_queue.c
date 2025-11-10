#include<stdio.h>
#define SIZE 5
void display(int queue[],int front ,int rear){
	if(front ==-1 || front>rear){
		printf("Queue is EMPTY!\n");
		return ;
	}
		printf("Queue elements are:");
		for(int i=front; i <=rear;i++){
			printf(" %d",queue[i]);
		}
		printf("\n");
	    
}
int main(){
	int queue[SIZE]={10, 20, 30, 40, 50};
	int front =0,rear=4;
	display(queue,front,rear);
	front =-1;
	rear =-1;
	display(queue,front,rear);
	return 0;
}

