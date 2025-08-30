#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=0;
struct node *temp;

void create();
void display();
void finsert();
void linsert();
void pinsert();
void fdelete();
void ldelete();
void pdelete();

void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\nMENU\n");
		printf("1.CREATE.\n2.Display.\n3.Insert First.\n4.Last Insert.\n5.Insert At Position.\n6.Delete At First.\n7.Delete At Last.\n8.Delete At Position.\n0.Exit\n");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				finsert();
				break;
			case 4:
				linsert();
				break;
			case 5:
				pinsert();
				break;
			case 6:
				fdelete();
				break;
			case 7:
				ldelete();
				break;
			case 8:
				pdelete();
				break;
			case 0:
				exit(0);
			default:
				printf("Enter Valid Choice..!!");
		}
	}while(1);
}

void create()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));

	printf("\nEnter Data : ");
	scanf("%d",&n->data);
	//n->next=head;

	if(head==0)
	{
		head=n;
		temp=n;
	}
	else
	{
		temp->next=n;
		temp=n;
	}
	n->next=head;

	//tail=head;
	//n->next=tail->next;
	//tail->next = n;
	//tail = n;
}

void finsert()
{
	if(head==0)
	{
		printf("List Is Empty..!!");
	}
	else
	{
		struct node *n;
		temp=head;
		n = (struct node *)malloc(sizeof(struct node));
		printf("\nData : \n");
		scanf("%d",&n->data);

		while(temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = n;
		n->next = head;
		head = n;
	}
}

void linsert()
{
	struct node *n;
	temp=head;
	n = (struct node *)malloc(sizeof(struct node));
	printf("\nData : \n");
	scanf("%d",&n->data);

	while(temp->next != head)
	{
		temp = temp->next;
	}

	temp->next = n;
	n->next = head;
}

void pinsert()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *n;
		int p,i;
		printf("Enter Position On Which You want to insert : ");
		scanf("%d",&p);
		n = (struct node*)malloc(sizeof(struct node));
		temp=head;

		for(i=1;i<p-1;i++)
		{
			temp=temp->next;
		}
		printf("Enter Data : ");
		scanf("%d",&n->data);

		n->next=temp->next;
		temp->next=n;

	}
}

void fdelete()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *temp1;
		temp1=head;
		temp->next = head->next;
		head = head->next;
		free(temp1);
	}
}

void ldelete()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *temp1;
		temp=head;
		while(temp->next != head)
		{
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = head;
		free(temp);
		temp=temp1;
	}
}

void pdelete()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *temp1;
		int p,i;
		printf("Enter Position From Where you want to delete : ");
		scanf("%d",&p);
		temp=head;

		for(i=1;i<p;i++)
		{
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = temp->next;
		free(temp);
	}
}

void display()
{
	temp=head;
	printf("\nData : \n");
	while(head!=temp->next)
	{
		printf("%d ",temp->data);
		//printf("%d ",temp->next);
		temp=temp->next;
	}
	printf("%d ",temp->data);
	printf("\n");
}