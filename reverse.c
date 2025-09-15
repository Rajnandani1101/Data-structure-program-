#include<stdio.h>
int main()
{
	int num,i,rev=0,sum;
	printf("Enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
	    sum=num%10;
		rev=rev*10+sum;
		num=num/10;
		
	}
	printf("Reverse of the number is %d",rev);
	return 0;
}
