#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head =NULL;
void insertAtBegining(int  value){
	struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
	newnode -> data= value;
	newNode ->next =head;
	head =newNode;
}
void display(){
	struct Node*temp=head;
	while(temp!=NULL){
		printf("%d->",temp ->data);
		temp=temp ->next;
	}
	printf("NULl\n");
}
int main (){
	insertAtBegining(10);
	insertAtBegining(20);
	insertAtBegining(30);
	dispaly();
	return 0;
}
