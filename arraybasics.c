#include<stdio.h>
int main()
{
	int a;
	printf("enter size :");
	scanf("%d",&a);
	int arr[a];
	int i,even=0,odd=0,evensum=0,oddsum=0;
	printf("Enter elements :");
	for (i=0; i<a; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0; i<a; i++)
	{
		if (arr[i]%2==0)
		{
			even+=1;
			evensum+=arr[i];
		}
		else
		{
			odd+=1;
			oddsum+=arr[i];
		}
	}
	printf("Even number count : %d\n",even);
	printf("Odd number count  : %d\n",odd);
	printf("Even number sum   : %d\n",evensum);
	printf("Odd number sum    : %d\n",oddsum);
	return 0;
}

