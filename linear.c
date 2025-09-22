#include<stdio.h>
int main()
{
	int a[6]= {10,20,30,40,50,60};
	int num,i,found=0;
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	for(i = 0;i< 6; i++ )
	{
		if(a[i]==num);
	{
		printf(" number found at position %d  \n",i,a[i]);
		found =1;
		break;
	}
	}
	if(!found){
		printf("number not found in array");
	}
	return 0;
	
	
	
}
