#include<stdio.h>
#include<conio.h>
#define size 10

int n;
int a[size];
void insert();
void display();
void eledelete();
void update();
void search();
void sort();
void merge();

void main()
{
	int ch,i;
	clrscr();
	printf("Enter Array Size : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
	}

	do
	{
		printf("\nManu\n");
		printf("1.Insert Element.\n2.Dislpay.\n3.Update.\n4.Delete.\n5.Search.\n6.Sorting.\n7.Marge.\n");
		printf("\nEnter Your Choice : ");

		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 4:
				eledelete();
				break;
			case 3:
				update();
				break;
			case 5:
				search();
				break;
			case 6:
				sort();
				break;
			case 7:
				merge();
				break;
			case 0:
				exit(0);
			default:
				printf("Invalid Choice..!!");
		}
	}while(1);
}

void display()
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void insert()
{
	int pos,val,i;
	printf("Enter Index : ");
	scanf("%d",&pos);
	printf("Enter Value : ");
	scanf("%d",&val);

	n = n+1;
	for(i=n;i>=pos;i--)
	{
		a[i+1] = a[i];
	}
	a[pos] = val;
	printf("\nElement Insert Sucessfully..!!\n");
}

void eledelete()
{
	int index,i;
	printf("Enter index For delete : ");
	scanf("%d",&index);

	n=n-1;
	for(i=index;i<n;i++)
	{
		a[i] = a[i+1];
	}
	printf("\nElement Delete successfully..!!");
}
void update()
{
	int pos,val;
	printf("Enter Postion and Value : ");
	scanf("%d %d",&pos,&val);

	a[pos]=val;
	printf("Update Sccessfully..!!");
}
void search()
{
	int ele,i,index,flag=0;
	printf("Enter Ele : ");
	scanf("%d",&ele);

	for(i=0;i<n;i++)
	{
		if(a[i] == ele)
		{
			flag=1;
			index = i;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nElement Found At %d\n",index);
	}
	else
	{
		printf("\nElement Not Found..!!\n");
	}
}
void sort()
{
	int i,j,temp;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Array Sorted...!!");
}
void merge()
{
	int b[3] = {4,5,6};
	int i;

	for(i=0;i<3;i++)
	{
		a[n] = b[i];
		n++;
	}
	printf("\nArray Merge..!!\n");
}