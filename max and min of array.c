//max and min element in an array
#include<stdio.h>
int main()
{
	int a;
	printf("Enter size :");
	scanf("%d",&a);
	int arr[a],i,max,min;
	printf("Enter elements :");
	for (i=0; i<a; i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for (i=0; i<a; i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("max element is : %d\n",max);
	printf("min element is : %d",min);
	return 0;
}
