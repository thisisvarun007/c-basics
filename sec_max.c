#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[a];
	int i,max1,max2;
	for (i=0; i<a; i++)
	{
		scanf("%d",&arr[i]);
	}
	max1=arr[0];
	max2=arr[0];
	for (i=0; i<a; i++)
	{
		if (arr[i]>max1)
		{
			max1=arr[i];
		}
		else
		{
			max2=arr[i];
		}
		
	}
	printf("%d",max2);
	return 0;
}
