// palindrome using functions
#include<stdio.h>
#include<string.h>
int flag=0;
int pal(int a)
{
	int temp=a,rem,rev=0;
	int res;
	while (temp>0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	if (rev==a)
	{
		return res=0;
	}
	else
	{
		return res=1;
	}
}
int main()
{
	int x;
	int res;
	scanf("%d",&x);
	res=pal(x);
	if (res==1)
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
	return 0;
}
