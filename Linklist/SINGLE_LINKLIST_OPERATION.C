
#include<stdio.h>
#include<conio.h>

void create();
void traversal();
void finsert();
void day8_d();
void day7_d();
void day9_d();
void linsert();
void pinsert();
void search();
void fdelete();
void ldelete();
void pdelete();
void copy();
void rev();

struct node
{
	int data;
	struct node *next;
};
struct node *head = 0;
struct node *temp;



void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\n\nMENU\n0.Exit\n1.Create Node.\n2.Traversal\n3.Insert At First.\n4.Day8_d\n5.Day7_d\n6.Day9_d\n7.Last Insert.\n8.Insert At Position.\n9.Serach.\n10.Delete At First.\n11.Delete At Last.\n12.Delete At Pos.\n13.Copy.\n");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				create();
				break;
			case 2:
				traversal();
				break;
			case 3:
				finsert();
				break;
			case 4:
				day8_d();
				break;
			case 5:
				day7_d();
				break;
			case 6:
				day9_d();
				break;
			case 7:
				linsert();
				break;
			case 8:
				pinsert();
				break;

			case 9:
				search();
				break;
			case 10:
				fdelete();
				break;
			case 11:
				ldelete();
				break;
			case 12:
				pdelete();
				break;
			case 13:
				copy();
				break;

			case 14:
				rev();
				break;

			default:
				printf("\nEnter Valid Choice...\n");
		}

	}while(1);
}

void rev()
{
	struct node *next=0;
	struct node *prev=0;

	temp = head;

	while(temp != 0)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}

	head = prev;
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

void finsert()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *n;
		n = (struct node*)malloc(sizeof(struct node));

		printf("\nEnter Data : ");
		scanf("%d",&n->data);
		n->next=head;
		head=n;
	}
}

void linsert()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *n;
		n = (struct node*)malloc(sizeof(struct node));
		temp=head;

		while(temp->next!=0)
		{
			temp=temp->next;
		}
		printf("Enter Data : ");
		scanf("%d",&n->data);

		temp->next=n;
		n->next=0;

		//traversal();
	}

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
		temp=head;
		head=head->next;
		//head->next = temp->next;
		//head = temp->next;
		printf("Add : %d\n",temp);
		free(temp);
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
		while(temp->next!=0)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=0;
		printf("Add : %d\n",temp);
		free(temp);
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
		printf("Enter Position On Which You want to delete : ");
		scanf("%d",&p);
		temp=head;

		for(i=1;i<p;i++)
		{
			temp1 = temp;
			temp=temp->next;
		}

		temp1->next=temp->next;
		printf("Add : %d\n",temp);
		free(temp);
	}
}

void copy()
{
	if(head==0)
	{
		printf("\nLinkList Underflow");
	}
	else
	{
		struct node *n;
		struct node *head1=0;
		struct node *temp1;
		temp = head;

		while(temp!=0)
		{
			n = (struct node*)malloc(sizeof(struct node));

			n->data = temp->data;
			n->next=0;
		       //printf("%d ",n->data);


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
			temp=temp->next;
		}

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

void day8_d()
{
	int count=0;
	temp=head;
	printf("\nData Divide By 7 : \n");
	while(temp!=0)
	{
		if(temp->data % 7 == 0)
		{
			printf("%d ",temp->data);
			count++;
		}
		temp=temp->next;
	}
	if(count==0)
	{
		printf("\nNo Data Fount Divisible By 7.\n");
	}
	else
	{
		printf("%d Ele Are Divible By 7.",count);
	}
	printf("\n");
}

void day7_d()
{
	int count=0,a;
	temp=head;
	printf("\nEnter Data WHich Want to Count : ");
	scanf("%d",&a);
	while(temp!=0)
	{
		if(temp->data == a)
		{
			count++;
		}
		temp=temp->next;
	}
	if(count==0)
	{
		printf("\nNo Data Fount\n");
	}
	else
	{
		printf("\n%d time %d Present",count,a);
	}
	printf("\n");
}
void day9_d()
{
	int count=0;
	temp=head;
	printf("\nEven Numbers Are : ");
	while(temp!=0)
	{
		if(temp->data% 2 == 0)
		{
			printf("%d ",temp->data);
			count++;
		}
		temp=temp->next;
	}
	if(count==0)
	{
		printf("\nNo Data Fount\n");
	}
	printf("\n");
}
void search()
{
	int flag=0,s;
	temp=head;
	printf("Enter Data For Serach : ");
	scanf("%d",&s);
	printf("\nSearch Element : \n");
	while(temp!=0)
	{
		if(temp->data == s)
		{
			flag=1;
			break;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		printf("\nNo Data Found.\n");
	}
	else
	{
		printf("%d Elemtnt Found",s);
	}
	printf("\n");
}