#include<stdio.h>
#include<conio.h>

void printarray(int a[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
	    printf("%d ",a[i]);
    }
}

void mergesort(int a[20],int lb,int mid,int ub)
{
    int i,j,k=lb,b[20];
    i = lb,j = mid+1;

    while(i <= mid && j <= ub)
    {
        if(a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    if(i > mid)
    {
        while(j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(i=lb;i<=ub;i++)
        {
            a[i] = b[i];
        }

}
void partision(int a[20],int lb,int ub)
{
    int mid;
    if(lb < ub)
    {
        mid = (lb+ub)/2;
        partision(a,mid+1,ub);
        partision(a,lb,mid);
        mergesort(a,lb,mid,ub);
    }
}
void main()
{
    int n,a[30],i;
    clrscr();
    printf("Enter Size Of Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element : ");
        scanf("%d",&a[i]);
    }

    printf("\nArray Befor Sorting.\n");
    printarray(a,n);
    partision(a,0,n-1);
    printf("\nArray After Sorting.\n");
    printarray(a,n);
    getch();
}