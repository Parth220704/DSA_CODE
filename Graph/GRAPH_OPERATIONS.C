#include<stdio.h>
#include<conio.h>

void graph();
void display();
int a[10][10];
int v;

void main()
{
    int ch;
    clrscr();
    do
    {
	printf("\nManu\n");
	printf("1.Create Graph.\n2.Display Degree.\n0.Exit.\n");
	printf("Enter Your Choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
		graph();
		break;
	    case 2:
		display();
		break;
	    case 0:
		exit(0);
	    default:
		printf("Invalid Choice..!!");
	}
    }while(1);
}

void graph()
{
    int i,j;
    printf("Enter Number Of Vertices : ");
    scanf("%d",&v);


    for(i=1;i<=v;i++)
    {
		for(j=1;j<=v;j++)
		{
			if(i==j)
			{
				a[i][j] = 0;
				printf("Value of a[%d][%d]  : %d\n",i,j,a[i][j]);
			}
			else
			{
				printf("Enter Value for a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
    }

    for(i=1;i<=r;i++)
    {
		for(j=1;j<=c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
    }

}

void display()
{
    int i,j,cnt=0;
    for(i=1;i<=v;i++)
    {
		cnt=0;
		for(j=1;j<=v;j++)
		{
			if(a[i][j] == 1)
			{
				cnt+=1;
			}
		}
		printf("Number Of Edges for Node %d = %d\n",i,cnt);
    }
}