#include<stdio.h>
#include<conio.h>
#include<math.h>

void series_95(int n);
void series_96(int n);
void series_97(int n);
void series_98(int n);
void series_99(int n);
void series_100(int n);
void series_101(int n);
void series_102(int n);
void series_103(int n);
void series_104(int n);
void series_105(int n);
void series_106(int n);
void series_107(int n);
void series_108(int n);
void series_109(int n);
void series_110(int n);
void series_111(int n);
void series_112(int n);
void series_113(int n);

void main()
{
	int n,choice;
	clrscr();

	printf("Enter Value Of N: ");
	scanf("%d",&n);


	printf("Enter Series No: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 95 : series_95(n);
		break;

		case 96 : series_96(n);
		break;

		case 97 : series_97(n);
		break;

		case 98 : series_98(n);
		break;

		case 99 : series_99(n);
		break;

		case 100 : series_100(n);
		break;

		case 101 : series_101(n);
		break;

		case 102 : series_102(n);
		break;

		case 103: series_103(n);
		break;

		case 104: series_104(n);
		break;

		case 105: series_105(n);
		break;

		case 106: series_106(n);
		break;

		case 107 : series_107(n);
		break;

		case 108 : series_108(n);
		break;

		case 109 : series_109(n);
		break;

		case 110 : series_110(n);
		break;

		case 111 : series_111(n);
		break;

		case 112 : series_112(n);
		break;

		case 113 : series_113(n);
		break;

		default: printf("Enter Valid Series");
	}

	getch();
}
long int Factorial(int n)
{
	int i;
	long int fact=1;

	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	return fact;
}
void series_95(int n)
{
       int sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum= %d",sum);
}

void series_96(int n)
{
	int sum=0,i;
	for(i=2;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("Sum= %d",sum);
}
void series_97(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i=i+2)
	{
		sum = sum + i;
	}
	printf("sum= %d",sum);
}
void series_98(int n)
{
	int sum=0,i;
	for(i=12;i<=n;i=i+10)
	{
		sum = sum + i;
	}
	printf("Sum= %d",sum);
}
void series_99(int n)
{
	 int sum=0,i;
	for(i=22;i<=n;i=i+20)
	{
		sum = sum + i;
	}
	printf("Sum= %d",sum);
}
void series_100(int n)
{
	int i,sum=0,flag=1;
	for(i=22;i<=n;i=i+20)
	{
		if(flag%2==0)
		{
			sum = sum - i;
		}
		else
		{
			sum = sum + i;
		}
		flag++;
	}
	printf("Sum= %d",sum);
}
void series_101(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum = sum+(i*i);
	}
	printf("Sum= %d",sum);
}
void series_102(int n)
{
	int sum=1,i,flag;
	for(i=2;i<=n;i=i++)
	{
		if(flag==0)
		{
			sum = sum + (i*i);
			flag=1;
		}
		else
		{
			sum = sum - (i*i);
			flag = 0;
		}
	}
		printf("Sum= %d",sum);
}
void series_103(int n)
{
	int i;
	double sum=0;

	for(i=1;i<=n;i++)
	{
		sum = sum+ Factorial(i);
	}
	printf("Sum = %lf",sum);
}
void series_104(int n)
{
	int i;
	long int sum=0;

	for(i=1;i<=n;i++)
	{
		sum = sum+ (1/Factorial(i));
	}
	printf("Sum = %ld",sum);
}
void series_105(int n)
{
	double sum=0,ans,temp=22,i;
	for(i=1;i<=n;i++)
	{
		ans = 1/temp;
		sum = sum + ans;
		temp = temp+20;
	}
	printf("Sum = %lf",sum);
}
void series_106(int n)
{
	int i,x;
	double sum=0;
	printf("Enter Value of X: ");
	scanf("%d",&x);


	for(i=1;i<=n;i++)
	{
		sum = sum + pow(x,i)/Factorial(i);
	}
	printf("Sum= %lf",sum);
}
void series_107(int n)
{
	int i,x;
	double sum=0;
	printf("Enter Value of X: ");
	scanf("%d",&x);

	for(i=1;i<=n;i=i+2)
	{
		sum = sum + pow(x,i)/Factorial(i);
	}
	printf("Sum= %lf",sum);
}
void series_108(int n)
{
	int sum=0,i,x;
	printf("Enter Value of X: ");
	scanf("%d",&x);

	for(i=1;i<=n;i++)
	{
		sum = sum + pow(x,i);
	}
	printf("Sum= %d",sum);
}
void series_109(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i=i+i)
	{
		sum = sum + i;
	}
	printf("Sum= %d",sum);
}
void series_110(int n)
{
	double sum=1,i;
	for(i=2;i<=n;i++)
	{
		sum=sum+(1/(i*i));
	}
	printf("Sum= %lf",sum);
}
void series_111(int n)
{
	int flag=0,i;
	double sum=0,ans,a;
	for(i=1;i<=n;i++)
	{
		if(flag==0)
		{
			a = i*i;
			ans = 1/a;
			sum= sum+ans;
			flag=1;
		}
		else
		{
			a = i*i;
			ans = -(1/a);
			sum = sum+ans;
			flag=0;
		}
	}
	printf("Sum= %lf",sum);
}
void series_112(int n)
{
	int i,x;
	double sum=1;
	printf("Enter Value of X: ");
	scanf("%d",&x);

	for(i=2;i<=n;i=i+2)
	{
		sum = sum + pow(x,i)/Factorial(i);
	}
	printf("Sum= %lf",sum);
}
void series_113(int n)
{
	int i,flag=0,x;
	double sum=1;

	printf("Enter Value of X: ");
	scanf("%d",&x);

	for(i=1;i<n;i++)
	{
		if(flag==0)
		{
			sum = sum -(x*i/(i*2));
			flag=1;
		}
		else
		{
			sum = sum + (x*i/(i*2));
		}
	}
	printf("Sum = %.2lf",sum);
}