#include<stdio.h>
#include<conio.h>
void quick(int a[100],int lb,int ub);
int particition(int a[100],int lb,int ub);
void display(int a[100],int num);
void main()
{
	int num,i,a[100];
	clrscr();
	printf("\nEnter Number Of Element : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\nEnter Eleent : ");
		scanf("%d",&a[i]);
	}
	display(a,num);
	quick(a,0,num-1);
	printf("\nAfter Swappping : ");
	display(a,num);
	getch();
}
void quick(int a[100],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=particition(a,lb,ub);
		quick(a,0,loc-1);
		quick(a,loc+1,ub);
	}
}
int particition(int a[100],int lb,int ub)
{
	int pivot,start,end,temp;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;
	return end;


}
void display(int a[100],int num)
{
	int i;
	for(i=1;i<=num;i++)
	{
		printf("\t %d",a[i]);
	}
}