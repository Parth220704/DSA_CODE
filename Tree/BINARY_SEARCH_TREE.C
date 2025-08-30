#include<stdio.h>
#include<conio.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *create(int data);
struct node *insert(struct node *n,int data);
void inOrder(struct node *root);
void preOrder(struct node *root);
void postOrder(struct node *root);

void main()
{
    struct node *root=0;
    int ch,data;
    clrscr();
    do
    {
	printf("\n\nMENU");
	printf("\n1.Create.\n2.In-Order.\n3.Pre-Order.\n4.Post-Order.\n0.Exit.\n");
	printf("Enter Your choice : ");
	scanf("%d",&ch);
	printf("\n");

	switch(ch)
	{
	    case 1:
		    printf("Enter Data : ");
            scanf("%d",&data);
            root = insert(root,data);
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
		    exit(1);
	    default:
		    printf("\nEnter valid Choice..\n");
	}
    }while(1);

}

struct node *create(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = 0;
    n->right = 0;
    return n;
}

struct node *insert(struct node *n,int data)
{
    if(n==0)
    {
        n = create(data);
        return n;
    }
    else if(data < n->data)
    {
        n->left = insert(n->left,data);
    }
    else if(data > n->data)
    {
        n->right = insert(n->right,data);
    }
    return n;
}

void inOrder(struct node *root)
{
    if(root == 0)
    {
		return;
    }
    else
    {
		inOrder(root->left);
		printf("%d , ",root->data);
		inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
	if(root == 0)
	{
		return;
	}
	else
	{
		printf("%d , ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
void postOrder(struct node *root)
{
	if(root == 0)
	{
		return;
	}
	else
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d , ",root->data);
	}
}
