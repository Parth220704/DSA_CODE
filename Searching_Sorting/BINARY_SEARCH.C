#include<stdio.h>
#include<conio.h>


void binary_search(int a[20],int n,int ele)
{
    int l=0,r=n-1,mid;

    while(l <= r)
    {
        mid = (l+r)/2;
        if(ele == a[mid])
        {
            break;
        }
        else if(ele > a[mid])
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    if(l > r)
    {
	    printf("%d not Found.\n",ele);
    }
    else
    {
	    printf("%d is Found At %d Index.",ele,mid);
    }
}

void main()
{
    int a[20],n,ele,i;
    clrscr();
    printf("Enter Size Of Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element : ");
        scanf("%d",&a[i]);
    }

    printf("Enter Element For Search : ");
    scanf("%d",&ele);

    binary_search(a,n,ele);
    getch();
}