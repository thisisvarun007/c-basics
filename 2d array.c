// 2 dimentional array
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter row size :");
	scanf("%d",&a);
	printf("Enter column size :");
	scanf("%d",&b);
	int i,j;
	int arr[b][a];
	printf("Enter array elements :\n");
	for (i=0; i<a; i++)
	{
		for (j=0; j<b; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Printing Elements :\n");
	for (i=0; i<b; i++)
	{
		for (j=0; j<a; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
