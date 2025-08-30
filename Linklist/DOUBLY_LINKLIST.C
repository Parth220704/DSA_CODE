#include<stdio.h>
#include<conio.h>

struct node
{
	struct node *pre;
	int data;
	struct node *next;
};

struct node *head=0;
struct node *temp;

struct node *head1=0;
struct node *temp1;

void create();
void fdisplay();
void ldisplay();
void finsert();
void linsert();
void pinsert();
void fdelete();
void ldelete();
void pdelete();
void copy();

void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\nMENU\n");
		printf("1.CREATE.\n2.DISPLAY From FRONT.\n3.DISPLAY From Last.\n4.Insert At First.\n5.Insert At Last.\n6.Insert At Positio.\n7.Delete At Front.\n8.Delete At Last.\n9.Delete At Position.\n10.COPY.\n0.Exit\n");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				fdisplay();
				break;
			case 3:
				ldisplay();
				break;
			case 4:
				finsert();
				break;
			case 5:
				linsert();
				break;
			case 6:
				pinsert();
				break;
			case 7:
				fdelete();
				break;
			case 8:
				ldelete();
				break;
			case 9:
				pdelete();
				break;
			case 10:
				copy();
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
	n=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data : ");
	scanf("%d",&n->data);

	n->next=0;

	if(head==0)
	{
		n->pre = 0;
		head=n;
		temp=n;
	}
	else
	{
		n->pre = temp;
		temp->next=n;
		temp=n;
	}
}

void finsert()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		struct node *n;
		n=(struct node *)malloc(sizeof(struct node));
		printf("Enter Data : ");
		scanf("%d",&n->data);
		n->pre=0;
		n->next=head;
		head->pre = n;
		head=n;
	}
}

void linsert()
{
	if(head==0)
	{
		printf("List Empty..!");
	}
	else
	{
		struct node *n;
		n=(struct node *)malloc(sizeof(struct node));
		printf("Enter Data : ");
		scanf("%d",&n->data);
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		n->pre = temp;
		n->next=0;
		temp->next=n;
		temp=n;
	}
}

void pinsert()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		struct node *n;
		int pos,i;
		n=(struct node *)malloc(sizeof(struct node));
		printf("Enter Position : ");
		scanf("%d",&pos);
		printf("Enter Data : ");
		scanf("%d",&n->data);
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		n->pre = temp;
		n->next = temp->next;
		temp->next = n;
		temp=n->next;
		temp->pre=n;

	}
}

void fdelete()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		temp=head;
		head = head->next;
		head->pre = 0;
		printf("Delete : %d",temp->data);
		free(temp);
	}
}
void ldelete()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		struct node *temp1;
		temp=head;
		while(temp->next!=0)
		{
			temp1=temp;
			temp=temp->next;

		}
		printf("Delete : %d",temp->data);
		free(temp);
		temp1->next=0;
	}
}

void pdelete()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		struct node *temp1;
		int p,i;
		printf("\nEnter Position : ");
		scanf("%d",&p);
		temp=head;
		for(i=0;i<p-1;i++)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next = temp->next;
		temp1=temp;
		temp = temp->next;
		temp->pre = temp1->pre;

		printf("Delete : %d",temp1->data);
		free(temp1);
	}
}

void fdisplay()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		temp=head;
		printf("Data : ");
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}

void ldisplay()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		temp=head;
		printf("Data : ");
		while(temp->next!=0)
		{
			//printf("%d ",temp->data);
			temp=temp->next;
		}
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->pre;
		}
	}
}

void copy()
{
	if(head == 0)
	{
		printf("List Empty..!");
	}
	else
	{
		struct node *n;
		temp=head;
		printf("Data : ");
		while(temp!=0)
		{
			n = (struct node*)malloc(sizeof(struct node));
			n->data = temp->data;
			n->next = 0;

			if(head1==0)
			{
				n->pre = 0;
				head1=n;
				temp1=n;
			}
			else
			{
				n->pre = temp1;
				temp1->next=n;
				temp1=n;
			}
			temp=temp->next;
		}
		temp1=head1;
		printf("Data : ");
		while(temp1!=0)
		{
			printf("%d ",temp1->data);
			temp1=temp1->next;
		}
	}
}