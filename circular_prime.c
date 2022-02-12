// circular prime
#include<stdio.h>
int rev(int num)
{
	int temp=num,rem,rev=0;
	while (temp>0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	return rev;
}
int is_prime(int num)
{
	int i;
	for (i=2; i*i<=num; i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a,res;
	scanf("%d",&a);
	res=rev(a);
	if (is_prime(a)==is_prime(res))
	{
		printf("Circular Prime");
	}
	else
	{
		printf("Not Circular Prime");
	}
}
