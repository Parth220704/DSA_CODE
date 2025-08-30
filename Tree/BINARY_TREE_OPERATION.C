#include<stdio.h>
#include<conio.h>

struct node
{
	struct node *l;
	int data;
	struct node *r;
};

struct node* create();
void inOrder(struct node* root);
void preOrder(struct node* root);
void postOrder(struct node* root);

struct node* create()
{
	struct node* n;
	int x;
	n = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data: ");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	n->data=x;
	printf("\nEnter Left Child Of %d",x);
	n->l=create();
	printf("\nEnter Right Child Of %d",x);
	n->r=create();
	return n;

}

void inOrder(struct node* root)
{
	if(root==0)
	{
		return;
	}
	else
	{
		inOrder(root->l);
		printf("%d ",root->data);
		inOrder(root->r);
	}
}

void preOrder(struct node* root)
{
	if(root==0)
		return;
	else
	{
		printf("%d ",root->data);
		preOrder(root->l);
		preOrder(root->r);
	}
}

void postOrder(struct node* root)
{
	if(root==0)
		return;
	else
	{
		postOrder(root->l);
		postOrder(root->r);
		printf("%d ",root->data);
	}
}

void main()
{
	int ch;
	struct node* root=0;
	clrscr();

	do
	{
		printf("\n1. Create Node\n2. In-Order Traversal\n3. Pre-Order Traversal\n4. Post-Order Traversal\n0. Exit");
		printf("\nEnter Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				root = create();
				break;
			case 2:
				inOrder(root);
				break;
			case 3:
				preOrder(root);
				break;
			case 4:
				postOrder(root);
				break;
			case 0:
				exit(0);
			default:
				printf("Enter valid choice!!");
		}
	}while(1);
}