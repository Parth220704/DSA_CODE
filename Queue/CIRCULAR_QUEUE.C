#include<stdio.h>
#include<conio.h>
#define size 5

int f=-1,r=-1;
int q[size];
void cdequeue();
void cenqueue();
void display();

void main()
{
    int ch;
    clrscr();
    do
    {
		printf("\nMenu\n");
	    printf("1.CEnqueue.\n2.CDequeue.\n3.Display.\n0.Exit");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			cenqueue();
			break;
			case 2:
			cdequeue();
			break;
			case 3:
			display();
			break;
			case 0:
			exit(0);
			default:
			printf("\nInvalid Choice..!!\n");
		}
    }while(1);
}

void cenqueue()
{
    if((f==0 && r==size-1) || (r==f-1))
    {
		printf("\nQueue Overflow.\n");
    }
    else
    {
		int val;
		printf("Enter Value : ");
		scanf("%d",&val);

		r = (r+1)%size;
		q[r] = val;
		if(f==-1)
		{
			f=0;
		}
		printf("\n%d Is Enqueued..!!\n",val);
	}
}

void cdequeue()
{
    if(f==-1)
    {
	printf("\nQueue Underflow..!\n");
    }
    else if(f==r)
    {
		printf("\n%d Is Dequeued\n",q[f]);
		f=-1;
		r=-1;
    }
    else
    {
		printf("\n%d Is Dequeued\n",q[f]);
		f = (f+1)%size;
    }
}

void display()
{
    if(f==-1)
    {
		printf("\nQueue Empty..!!\n");
    }
    else
    {
	int i;
	printf("\nData : ");

       if(f > r)
       {
			for(i=f;i<size;i++)
			{
				printf("%d ",q[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf("%d ",q[i]);
			}
       }
       else
       {
			for(i=f;i<=r;i++)
			{
				printf("%d ",q[i]);
			}
       }
    }
}