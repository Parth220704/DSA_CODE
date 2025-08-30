#include<stdio.h>
#include<conio.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *f=0;
struct node *r=0;

void enqueue();
void dequeue();
void display();

void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\nMENU\n");
		printf("1.ENQUEUE.\n2.DEQUEUE.\n3.DISPLAY.\n0.Exit\n");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 0:
				exit(0);
			default:
				printf("Enter Valid Choice..!!");
		}
	}while(1);
}

void enqueue()
{
    struct node *n;
    printf("Enter Data : ");
    scanf("%d",&n->data);

	n->next=0;

	if(f==0)
	{
		f=n;
		r=n;
	}
	else
	{
		r->next = n;
		r=n;
	}

    printf("%d ",n->next);
    printf("\nNode Enqueued..\n");
}

void dequeue()
{
    if(f==0)
    {
	printf("\nQueue Empty..\n");
    }
    else
    {
	struct node *temp;
	temp=f;
	f=f->next;
	printf("\n%d Dequeued.\n",temp->data);
	free(temp);
    }
}

void display()
{
    if(f==0)
    {
	printf("\nQueue Empty..\n");
    }
    else
    {
	struct node *temp;
	temp = f;
	printf("Data : ");
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
    }
}