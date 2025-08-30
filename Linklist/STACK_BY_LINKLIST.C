#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top=0;


void push();
void pop();
void peek();
void display();

void main()
{
    int ch;
    clrscr();
    do
    {
        printf("\nMenu\n");
	    printf("1.Push.\n2.Pop.\n3.Peek.\n4.Display.\n0.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
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

void push()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&n->data);
   
    if(top == 0)
    {
        n->next = 0;
        top = n;  
    }
    else
    {
        n->next = top;
        top=n;
    }

    printf("\nNode Pushed..!!\n");
}

void pop()
{
    if(top == 0)
    {
        printf("\nStack underflow..\n");
    }
    else
    {
        struct node *temp;
        temp=top;
        top = top->next;
        printf("\n %d pop.\n",temp->data);
        free(temp);
    }
}

void peek()
{
    if(top == 0)
    {
        printf("\nStack underflow..\n");
    }
    else
    {
        printf("\n%d Top Value.\n",top->data);
    }
}

void display()
{
    if(top == 0)
    {
        printf("\nStack Empty..\n");
    }
    else
    {
        struct node *temp;
        temp=top;
        printf("Data : ");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}