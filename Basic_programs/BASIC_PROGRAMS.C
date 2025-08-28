#include<stdio.h>
#include<conio.h>

void s1(int);
void perfect(int n);
void s3(int);
void leap(int);
void year(int);
void reverse(int);
void arm(int);
void s8(int);

void main()
{
	int n,ch;
	clrscr();
	do
	{
		printf("\nxpEnter ch:");
		scanf("%d",&ch);
		if(ch==0)
		{
			exit(0);
		}
		switch(ch)
		{
			case 1:
				printf("Enter n:");
				scanf("%d",&n);
				s1(n);
				break;
			case 2:
				printf("Enter n:");
				scanf("%d",&n);
				perfect(n);
				break;
			case 3:
				printf("Enter n:");
				scanf("%d",&n);
				s3(n);
				break;
			case 4:
				printf("Enter n:");
				scanf("%d",&n);
				leap(n);
				break;
			case 5:
				printf("Enter n:");
				scanf("%d",&n);
				year(n);
				break;
			case 6:
				printf("Enter n:");
				scanf("%d",&n);
				reverse(n);
				break;
			case 7:
				printf("Enter n:");
				scanf("%d",&n);
				arm(n);
				break;

			case 8:
				printf("Enter n:");
				scanf("%d", &n);
				s8(n);
				break;
		}
	}while(1);
}

void s1(int n)
{
	int i;
	float sum=0,n1;
	for(i=1;i<=n;i++)
	{
		n1=i*i;
	      sum = sum + 1 / n1;
	}
	printf("Sum = %f\n",sum);
}

void perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == n)
	{
		printf("%d is perfect number.\n",sum);
	}
}

void s3(int n){
	int sum=0,a=12,i;
	for(i=1;i<=n;i++)
	{

		sum = sum + a ;
		a=a+10;
	}
	printf("%d\n",sum);
}
void leap(int year)
{
	if(year % 100 == 0)
	{
		if(year % 400 == 0)
		{
			printf("%d Year is leap\n",year);
		}
	}
	else if(year % 4 == 0)
		{
			printf("%d Year is leap\n",year);
		}
	 else
	 {
		printf("%d is not leap year\n",year);
	 }
}

void year(int n)
{
	int year,month,week,day;

	year = n / 365;
	n = n % 365;

	month = n / 30;
	n = n % 30;

	week = n / 7;
	n = n %7;

	day = n;

	printf("Year = %d\n month = %d\n week = %d\n days = %d\n",year,month,week,day);
}

void reverse(int n)
{
	int rem,rev=0;
	while(n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	printf("%d\n",rev);
}

void arm(int n)
{
	int count=0,rem,a=n,b, sum=0, i;

	while (n != 0)
	{
		n = n /10;
		count = count + 1;
	}

	while(a!=0)
	{
		b=1;

		rem = a % 10;

		for(i=1;i<=count;i++)
		{
		    b=b*rem;
		}

		sum = sum + b;

		a = a / 10;
	}
	printf("\n%d",sum);

}

void s8(int n)
{
	int sum = 0, f1, l1;

	l1 = n % 10;

	while(n >= 10)
	{
		n = n / 10;
	}

	f1 = n;

	sum = f1 + l1;

	printf("\nAns : %d", sum);
}