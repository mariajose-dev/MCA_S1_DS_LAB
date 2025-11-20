//Binary Search

#include<stdio.h>

void main(){
	int a[10],lim,i;
	printf("BINARY SEARCH\n\n-----------------------------\n");
	
	printf("Enter limit of array:- ");
	scanf("%d",&lim);
	
	printf("Enter Array:-\n");
	for(i=0;i<lim;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array:-\n");
	for(i=0;i<lim;i++)
	{
		scanf("%d\t",a[i]);
	}
}
