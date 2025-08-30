
#include<stdio.h>
#include<conio.h>

void marge();
void create();
void create1();
void traversal();
void traversal1();
void rev();
void union_list();
void intersect_list();

struct node
{
	int data;
	struct node *next;
};

struct node *head=0;
struct node *temp;
struct node *head1=0;
struct node *temp1;

void main()
{
	int n,n1,i,ch;
	clrscr();
	printf("Enter No. Of node for 1 list : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		create();
	}

	printf("Enter No. Of node for 2 list : ");
	scanf("%d",&n1);

	for(i=0;i<n1;i++)
	{
		create1();
	}

	do
	{
		printf("\nMenu\n");
		printf("1.Merge List.\n2.Reverse List.\n3.Union.\n4.Intersection.\n5.Traversal.\n6.Traversal1.\n0.Exit\n");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				marge();
				break;
			case 2:
				rev();
				break;
			case 3:
				union_list();
				break;
			case 4:
				intersect_list();
				break;
			case 5:
				traversal();
				break;
			case 6:
				traversal1();
				break;
			case 0:
				exit(0);
			default:
				printf("Invalid Choice..!");
		}
	}while(1);
}

void marge()
{
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next = head1;

	traversal();
}

void rev()
{
	if(head==0)
	{
		printf("List Overflow");
	}
	else
	{
		struct node *next1=0;
		struct node *pre=0;

		while(head!=0)
		{
			next1 = head->next;
			head->next = pre;
			pre = head;
			head= next1;
		}
		head=pre;
		printf("\nLink List SuccessFully revese..\n");
	}
}

void union_list()
{
		struct node *n;
		struct node *head2=0;
		struct node *temp2;
		int flag=0;
		temp = head;

		while(temp!=0)
		{
			n = (struct node*)malloc(sizeof(struct node));

			n->data = temp->data;
			n->next=0;
		       //printf("%d ",n->data);


			if(head2==0)
			{
				head2=n;
				temp2=n;
			}
			else
			{
				temp2->next=n;
				temp2=n;
			}
			temp=temp->next;
		}

		temp1=head1;
		while(temp1!=0)
		{
			flag=0;
			temp2=head2;
			while(temp2!=0)
			{
				if(temp1->data == temp2->data)
				{
					flag=1;
					break;
				}
				temp2=temp2->next;
			}
			if(flag==0)
			{
				n = (struct node*)malloc(sizeof(struct node));
				n->data = temp1->data;
				n->next=0;
				temp2=head2;

				while(temp2->next!=0)
				{
					temp2 = temp2->next;
				}
				temp2->next=n;

			}
			temp1=temp1->next;
		}
		temp2=head2;
		printf("\nData : \n");
		while(temp2!=0)
		{
			printf("%d ",temp2->data);
			//printf("%d ",temp->next);
			temp2=temp2->next;
		}
		printf("\n");
}

void intersect_list()
{
		struct node *n;
		struct node *head2=0;
		struct node *temp2;
		int flag=0;


		temp=head;
		while(temp!=0)
		{
			flag=0;
			temp1=head1;
			while(temp1!=0)
			{
				if(temp->data == temp1->data)
				{
					flag=1;
					break;
				}
				temp1=temp1->next;
			}
			if(flag==1)
			{
				n = (struct node*)malloc(sizeof(struct node));
				n->data = temp->data;
				n->next=0;
				if(head2==0)
				{
					head2=n;
					temp2=n;
				}
				else
				{
					temp2->next=n;
					temp2=n;

				}

			}
			temp=temp->next;
		}

		temp2=head2;
		printf("\nData : \n");
		while(temp2!=0)
		{
			printf("%d ",temp2->data);
			//printf("%d ",temp->next);
			temp2=temp2->next;
		}
		printf("\n");
}

void create()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));

	printf("\nEnter Data : ");
	scanf("%d",&n->data);
	n->next=0;

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
}

void create1()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));

	printf("\nEnter Data : ");
	scanf("%d",&n->data);
	n->next=0;

	if(head1==0)
	{
		head1=n;
		temp1=n;
	}
	else
	{
		temp1->next=n;
		temp1=n;

	}
}

void traversal()
{
	temp=head;
	printf("\nData : \n");
	while(temp!=0)
	{
		printf("%d ",temp->data);
		//printf("%d ",temp->next);
		temp=temp->next;
	}
	printf("\n");
}

void traversal1()
{
	temp1=head1;
	printf("\nData : \n");
	while(temp1!=0)
	{
		printf("%d ",temp1->data);
		//printf("%d ",temp->next);
		temp1=temp1->next;
	}
	printf("\n");
}