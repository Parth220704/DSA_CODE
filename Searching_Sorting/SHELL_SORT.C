#include<stdio.h>
#include<conio.h>

void shellsort(int a[30],int n)
{
    int gap,i,j,temp;

    for(gap=n/2;gap>=1;gap=gap/2)
    {

        for(j=gap;j<n;j++)
        {
            for(i=j-gap;i>=0;i=i-gap)
            {
                if(a[i+gap] > a[i])
                {
                    break;
                }
                else
                {

                        temp = a[i];
                        a[i] = a[i+gap];
                        a[i+gap] = temp;
		        }
            }
        }
    }
}


void printarray(int a[30],int n)
{
	int i;
    for(i=0;i<n;i++)
    {
	printf("%d ",a[i]);
    }
}
void main()
{
    int n,a[30],i;
    clrscr();
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
	printf("Enter Element : ");
	scanf("%d",&a[i]);
    }
    printf("\nArray : ");
    printarray(a,n);
    shellsort(a,n);
    printf("\nSorted Array : ");
    printarray(a,n);
    getch();
}