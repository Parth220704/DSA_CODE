#include<stdio.h>
#include<conio.h>

int n,a[10];
void printarray()
{
    int i;
    printf("Sorted Array : ");
    for(i=1;i<=n;i++)
    {
	printf("%d ",a[i]);
    }
}

void insertionsort()
{
    int i,j,temp;;

    for(i=1;i<=n;i++)
    {
        temp = a[i];

        for(j=i-1;j>=0 && temp < a[j];j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
}

void main()
{
    int i,j,ch;
    clrscr();
    printf("Enter Size of An Array : ");
    scanf("%d",&n);

    printf("Enter Elements : ");
    for(i=1;i<=n;i++)
    {
	    scanf("%d",&a[i]);
    }
    printf("Array Elements : ");
    for(i=1;i<=n;i++)
    {
	    printf("%d ",a[i]);
    }

    do
    {
        printf("\n\nMENU");
        printf("\n1.Sort Array.\n2.Print Array.\n0.Exit.\n");
        printf("Enter Your choice : ");
        scanf("%d",&ch);
        printf("\n");

	switch(ch)
	{
	    case 1:
            insertionsort();
            break;
	    case 2:
		    printarray();
            break;
	    
	    case 0:
		    exit(1);
	    default:
		    printf("\nEnter valid Choice..\n");
	}
    }while(1);
}