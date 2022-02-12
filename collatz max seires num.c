//collatz sequence max sries number
#include<stdio.h>
int main()
{
	long long int num,i,c=0,a,max=0,maxs=0,num2;
	scanf("%d%d",&num,&num2);
	for (i=num; i<=num2; i++)
	{
		c=0;
		a=i;
		while (1>0)
		{
			if (a==1)
			{
				c++;
				break;
			}
			else
			{
				if (a%2==0)
				{
					a=a/2;
					c++;
					continue;
				}
				else
				{
					a=(3*a)+1;
					c++;
					continue;
				}
			}
		}
		if (max<c)
		{
			max=c;
			maxs=i;
		}
	}
	printf("largest is %lld",maxs);
	return 0;
}
