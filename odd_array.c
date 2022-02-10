//odd array or not
#include<stdio.h>
void main()
{
	int a;
	printf("enter size of the array :");
	scanf("%d",&a);
	int arr[a],i;
	for (i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<a;i++)
	{
		if (arr[i]%2==0)
		{
			printf("false");
			break;
		}
	}
}
