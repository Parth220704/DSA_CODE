#include<stdio.h>
#include<conio.h>

void prime(int,int);

void main()
{
    int a,b;
    clrscr();
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    prime(a,b);
    getch();
}

void prime(int a,int b)
{
    int i,j,k,flag,ai=0,p[100];
    for(i=a;i<=b;i++)
    {
	flag=0;
	for(j=2;j<i;j++)
	{
	    if(i%j==0)
	    {
		//printf("%d ",i);
                flag=1;
		break;
	    }
	}
	if(flag==0)
	{
	    p[ai] = i;
	    ai++;
	}
    }

    printf("\nPrime NUmbers Are : \n");
    for(i=0;i<ai;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n\n");
    for(i=a;i<=b;i++)
    {
        for(j=0;j<=ai;j++)
        {
            for(k=0;k<=ai;k++)
            {
                if(p[j] + p[k] == i)
                {
                    printf("%d = %d + %d\n",i,p[j],p[k]);
                }
            }
        }
    }
}