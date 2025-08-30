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
void cfinsert();
void clinsert();
void cpinsert();
void cfdelete();
void cldelete();
void cpdelete();
void display();


void main()
{
    int ch;
    clrscr();
    do
    {
	    printf("\nMenu\n");
	    printf("\n1.Create Node.\n2.Insert At First.\n3.Insert At Last.\n4.Insert At Position.\n5.Delete At First.\n6.Delete At Last.\n7.Delete At Position.\n8.Display.\n0.Exit");
	printf("\nEnter Your Choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
	    case 1:
			create();
			break;
	    case 2:
			cfinsert();
			break;
	    case 3:
			clinsert();
			break;
	    case 4:
			cpinsert();
			break;
	    case 5:
			cfdelete();
			break;
	    case 6:
			cldelete();
			break;
	    case 7:
			cpdelete();
			break;
	    case 8:
			display();
			break;
	    case 0:
		    exit(0);
	    default:
		    printf("\nInvalid Choice..!!\n");
	}
    }while(1);
}

void create()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&n->data);
    
    if(head==0)
    {
        head=n;
        temp=n;     
    }
    else
    {
        temp->next=n;
        temp = n;
    }
    n->next = head;

    printf("\nNode Created..!!\n");
}

void cfinsert()
{
    if(head==0)
    {
        printf("\nList Empty..!\n");
    }
    else
    {
        struct node *n;
        n = (struct node *)malloc(sizeof(struct node));

        printf("Enter Data : ");
        scanf("%d",&n->data);
        temp=head;
        while(temp->next != head)
		{
			temp = temp->next;
		}
        n->next = head;
        head=n;
        temp->next = n;

        printf("\nNode Inserted..\n");
    }
}

void clinsert()
{
    if(head==0)
    {
        printf("\nList Empty..\n");
    }
    else
    {
        struct node *n;
        n = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d",&n->data);

        temp=head;
        while(temp->next != head)
	    {
		    temp = temp->next;
	    }
        temp->next = n;
        temp=n;
        n->next = head;

        printf("\nNode Inserted..\n");
    }
}

void cpinsert()
{
    if(head==0)
    {
        printf("\nList Empty..\n");
    }
    else
    {
        struct node *n;
        int pos,i;
        n = (struct node *)malloc(sizeof(struct node));

        printf("Enter Position : ");
        scanf("%d",&pos);
        printf("Enter Data : ");
        scanf("%d",&n->data);

        temp = head;

        for(i=1;i<pos-1;i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        printf("\nNode Inserted..\n");
    }
}

void cfdelete()
{
    if(head==0)
    {
        printf("\nList Empty..\n");
    }
    else
    {
        struct node *temp1;
        temp=head;
        while(temp->next != head)
        {
            temp=temp->next;
        }
        temp1=head;
        temp->next = head->next;
        head=head->next;
        free(temp1);

        printf("\nNode Deleted..!\n");
    }
}

void cldelete()
{
    if(head==0)
    {
        printf("\nList Empty..\n");
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
        printf("\nNode Deleted..!\n");
    }
}

void cpdelete()
{
    if(head==0)
    {
        printf("\nList Empty..\n");
    }
    else
    {
        struct node *temp1;
        int pos,i;
        printf("Enter Position : ");
        scanf("%d",&pos);

        temp = head;
        for(i=1;i<pos;i++)
            {
                temp1=temp;
                temp = temp->next;
            }
        temp1->next= temp->next;
        free(temp);

        printf("\nNode Deleted..!\n");
    }
}

void display()
{
    if(head==0)
    {
        printf("\nList Empty..\n");
    }
    else
    {
        temp=head->next;
        printf("\nData : ");
        printf("%d ",head->data);

        while(temp!=head)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}