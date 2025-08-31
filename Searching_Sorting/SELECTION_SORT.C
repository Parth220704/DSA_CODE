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

void selectionsort()
{
    int i,j,temp,min,index;
    for(i=0;i<n-1;i++)
    {
        // index = i;
        // min = a[i];
        min = i;
        for(j=i+1;j<=n;j++)
        {
            if(a[j] < a[min])
            {
                // index = j;
                // min = a[j];
                min = j;
            }
        }
        // a[index] = a[i];
        // a[i] = min;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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
            selectionsort();
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