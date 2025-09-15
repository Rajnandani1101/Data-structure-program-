#include<stdio.h>
int main(){
	int n,i,f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=1){
		f=f*n;
		n--;
	}
	printf("Factorial of %d is %d" ,f) ;
}
