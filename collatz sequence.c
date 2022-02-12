//collatz sequence
#include<stdio.h>
int main()
{
	int a,c=0;
	scanf("%d",&a);
	while (1>0)
	{
		if (a==1)
		{
			printf("%d ",a);
			c++;
			break;
		}
		else
		{
			printf("%d ",a);
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
	printf(" the no of terms are %d",c);
}
