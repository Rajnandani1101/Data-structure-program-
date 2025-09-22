#include<stdio.h>
int main()
{
	int a[6]={ 10, 20,30,40,50,60};
	int n=6;
	int i;
	int p=4, v=44;
	for (i =n; i>p;i--){
		a[i]=a[i-1];
	}
	a[p]=v;
	n++;
	printf("Array after interstion:");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
