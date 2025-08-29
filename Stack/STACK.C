#include<stdio.h>
#include<conio.h>
#define size 10

int s[size];
int top = -1;

void push();
void display();
void pop();
void peek();

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
    if(top == size-1)
    {
        printf("\nStack Overflow..\n");
    }
    else
    {
        int val;
        printf("\nEnter Value : ");
        scanf("%d",&val);
        top++;
        s[top] = val;
        printf("\nElement Add Sucessfully..!!\n");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        top--;
        printf("\n%d id pop out.\n",s[top+1]);
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        printf("\n%d is top most element.\n",s[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        int i;
        printf("\nData : ");
        for(i=top;i>=0;i--)
        {
            printf("%d ",s[i]);
        }
    }
}