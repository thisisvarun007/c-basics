#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter row and column sizes :");
	scanf("%d%d",&a,&b);
	int i,j,arr[b][a];
	int s1=0,s2=0,diff;
	if ( a==b)
	{
		for (i=0; i<b; i++)
		{
			for (j=0; j<a; j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		for (i=0; i<b; i++)
		{
			for (j=0; j<a; j++)
			{
				if (i==j)
				{
					s1+=arr[i][j];
				}
				if (i+j==a-1)
				{
					s2+=arr[i][j];
				}
			}
		}
		diff=s1-s2;
		if (diff<0)
		{
			diff*=-1;
		}
		printf("\nThe abosolute diff is :%d",diff);
	}
}
