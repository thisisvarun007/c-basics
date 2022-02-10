//  max of sums of elements having four directions
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Row and Column size :");
	scanf("%d%d",&a,&b);
	int arr[b][a],i,j,sum=0,max=0;
	printf("Enter elements :");
	for (i=0; i<b; i++)
	{
		for (j=0; j<a; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=1; i<b-1; i++)
	{
		for (j=1; j<a-1; j++)
		{
			sum=arr[i-1][j]+arr[i+1][j]+arr[i][j-1]+arr[i][j+1];
			if (sum>max)
			{
				max=sum;
			}
		}
	}
	printf("The Maximum sum is : %d",max);
	return 0;
}
