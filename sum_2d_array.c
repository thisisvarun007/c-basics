// 2d array sum task
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter row size :");
	scanf("%d", &a);
	printf("enter column size :");
	scanf("%d", &b);
	int mat1[b][a],mat2[b][a],summat[b][a];
	int i,j;
	printf("enter elements of 1st matrix :\n");
	for (i=0; i<b; i++)
	{
		for (j=0; j<a; j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter elements of 2nd matrix :\n");
	for (i=0; i<b; i++)
	{
		for (j=0; j<a; j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for (i=0; i<b; i++)
	{
		for (j=0; j<a; j++)
		{
			summat[i][j]=(mat1[i][j])+(mat2[i][j]);
		}
	}
	printf("\nAfter adding elements of array :\n\n");
	for (i=0; i<b; i++)
	{
		for (j=0; j<a; j++)
		{
			printf("%d ",summat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
