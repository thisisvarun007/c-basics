// functions - task
#include<stdio.h>
int is_prime(int num)
{
	int i;
	if (num==1)
	{
		return 0;
	}
	else
	{
		for (i=2; i*i<=num; i++)
		{
			if (num%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int a,b,c;
	while (1>0)
	{
		printf("1,primality check\n2,primes in range\n3,composites in a range\n4,break\n");
		printf("\nEnter your choice :");
		scanf("%d",&c);
		if (c==1)
		{
			int num;
			printf("\nEnter a number :");
			scanf("%d",&num);
			if (is_prime(num)==1)
			{
				printf("%d is a Prime\n\n",num);
			}
			else
			{
				printf("%d is Not a Prime\n\n",num);
			}
		}
		else if (c==2)
		{
			printf("\nEnter start and stop values of the range :");
			scanf("%d%d",&a,&b);
			for (a;a<=b;a++)
			{
				if (is_prime(a)==1)
				{
					printf("%d ",a);
				}
			}
			printf("\n\n");
		}
		else if (c==3)
		{
			printf("\nEnter start and stop values of the range :");
			scanf("%d%d",&a,&b);
			for (a;a<=b;a++)
			{
				if (is_prime(a)!=1)
				{
					printf("%d ",a);
				}
			}
			printf("\n\n");
		}
		else if (c==4)
		{
			printf("Thank you for using my Product\n");
			break;
		}
		else
		{
			printf("Invalid input ! Try Again...\n\n");
			continue;
		}
		printf("=====================================\n");
	}
	return 0;
	
} 
