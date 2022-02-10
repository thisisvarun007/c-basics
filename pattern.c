#include<stdio.h>
int main()
{
    int a,i,j,k;
    char ch='*';
    scanf("%d",&a);
    if (a>=1 && a<=10000)
    {
        for (i=1; i<=a; i++)
        {
            if (i==a)
            {
                for (k=1; k<=a; k++)
                {
                    printf("%c",ch);
                }
                break;
            }
            for (j=1; j<=i; j++)
            {
                if (j>1 && j<i)
                {
                    printf(" ");
                }
                else if (j==1 || j==i)
                {
                    printf("%c",ch);
                }
            }
            if (i<a)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
