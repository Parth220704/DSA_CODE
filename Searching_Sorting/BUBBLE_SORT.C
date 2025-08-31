#include<stdio.h>
#include<conio.h>

int n,arr[10];
void printarray()
{
    int i;
    printf("Sorted Array : ");
    for(i=1;i<=n;i++)
    {
	printf("%d ",arr[i]);
    }
}

void bubblesort()
{
    int i,j,temp;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
	    scanf("%d",&arr[i]);
    }
    printf("Array Elements : ");
    for(i=1;i<=n;i++)
    {
	    printf("%d ",arr[i]);
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
            bubblesort();
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