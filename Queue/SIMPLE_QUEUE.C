#include<stdio.h>
#include<conio.h>
#define size 10

int f = -1,r = -1;
int q[size];

void enueue();
void dequeue();
void peek();
void display();

void main()
{
    int ch;
    clrscr();
    do
    {
        printf("\nMenu\n");
	    printf("1.Enqueue.\n2.Dequeue.\n3.Peek.\n4.Display.\n0.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                enueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid Choice..!!");
        }
    }while(1);
}

void enueue()
{
    if(r >= size)
    {
        printf("\nQueue Overflow.\n");
    }
    else
    {
        int val;
        printf("Enter Value : ");
        scanf("%d",&val);

        r++;
        q[r] = val;
        
        if(f==-1)
        {
            f=0;
        }
	printf("\nElement Enqueue..\n");
    }
}

void dequeue()
{
    if(f==-1)
    {
        printf("Queue Underflow.");
    }
    else if(f==r)
    { 
            f=-1;
            r=-1;
            printf("\nElement Dequeue..\n");
    }
    else
    {
        f++;
        printf("\nElement Dequeue..\n");
    }
}

void peek()
{
    if(f==-1)
    {
        printf("Queue Underflow.");
    }
    else
    {
        printf("Front = %d",q[f]);
    }
}

void display()
{
    if(f==-1)
    {
        printf("Queue Underflow.");
    }
    else
    {
        int i;
	    printf("\nData : ");
        for(i=f;i<=r;i++)
        {
            printf("%d ",q[i]);
        }
    }
}