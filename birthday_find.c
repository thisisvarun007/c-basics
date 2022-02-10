#include<stdio.h>
int main()
{
	int arr[32]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	int i,j=1,bday;
	int flag=0;
	char c;
	while (j>=1)
	{
		printf("Is your birthday before 11 ? ");
		scanf("%s",&c);
		if ( c=='y')
		{
			printf("Is your birthday before 6 ? ");
			scanf("%s",&c);
			if (c=='y')
			{
				for (i=0; i<6; i++)
				{
					if (i==0)
					{
						continue;
					}
					else
					{
						printf("Is your birthday on %d ?",arr[i]);
					    scanf("%s",&c);
					    if (c=='y')
					    {
						    bday=arr[i];
						    flag=1;
						    break;
					    }
					    else if (i==4 && c=='n')
					    {
						    bday=arr[i+1];
						    flag=1;
						    break;
					    }
					}
				}
			}
			else
			{
				for (i=6; i<12; i++)
				{
					printf("Is your birthday on %d ?",arr[i]);
					scanf("%s",&c);
					if (c=='y')
					{
						bday=arr[i];
						flag=1;
						break;
					}
					else if (i==9 && c=='n')
					{
						bday=arr[i+1];
						flag=1;
						break;
					}
				}
			}
			if (flag==1)
			{
				break;
			}
		}
		else
		{
			printf("Is your birthday before 21 ?");
		    scanf("%s",&c);
		    if (c=='y')
		    {
			    printf("Is your birthday before 16 ?");
			    scanf("%s",&c);
			    if (c=='y')
			    {
				    for (i=11; i<16; i++)
				    {
					    printf("Is your birthday on %d ?",arr[i]);
					    scanf("%s",&c);
					    if (c=='y')
					    {
						    bday=arr[i];
						    flag=1;
						    break;
					    }
					    else if (i==14 && c=='n')
					    {
						    bday=arr[i+1];
						    flag=1;
						    break;
					    }
				   }
			    }
			    else
			    {
				    for (i=16; i<21; i++)
				    {
					    printf("Is your birthday on %d ?",arr[i]);
					    scanf("%s",&c);
					    if (c=='y')
					    {
						    bday=arr[i];
						    flag=1;
						    break;
					    }
					    else if (i==19 && c=='n')
					    {
						    bday=arr[i+1];
						    flag=1;
						    break;
					    }
				    }
			   }
		    }
		    else
		    {
		    	printf("Is your birthday before 26 ?");
			    scanf("%s",&c);
			    if (c=='y')
			    {
				    for (i=21; i<26; i++)
				    {
					    printf("Is your birthday on %d ?",arr[i]);
					    scanf("%s",&c);
					    if (c=='y')
					    {
						    bday=arr[i];
						    flag=1;
						    break;
					    }
					    else if (i==24 && c=='n')
					    {
						    bday=arr[i+1];
						    flag=1;
						    break;
					    }
				   }
			    }
			    else
			    {
				    for (i=26; i<31; i++)
				    {
					    printf("Is your birthday on %d ?",arr[i]);
					    scanf("%s",&c);
					    if (c=='y')
					    {
						    bday=arr[i];
						    flag=1;
						    break;
					    }
					    else if (i==30 && c=='n')
					    {
						    bday=arr[i+1];
						    flag=1;
						    break;
					    }
				    }
			   }			    	
			}
			if (flag==1)
			{
				break;
			}
		}
		if (flag==1)
			{
				break;
			}
		j++;
	}
	printf("\n\n");
	printf("your birthday is on : January %d",bday);
	return 0;
}
