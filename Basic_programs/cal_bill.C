//bill using function
#include<stdio.h>
#include<conio.h>
void cal(float);
void main()
{
	float unit;
	clrscr();
	printf("Enter Unit:");
	scanf("%f",&unit);
	cal(unit);
	getch();
}
void cal(float a)
{
	float ans;
	if(a<=50)
	{
		ans=a*2.30;
		printf("%f",ans);
	}
	else if(a<=100)
	{
		ans=50*2.30+((a-50)*2.60);
		printf("%f",ans);
	}
	else if(a<=150)
	{
		ans=50*2.30+50*2.60+((a-100)*3.25);
		printf("%f",ans);
	}
	else if(a>200)
	{
		ans=50*2.30+50*2.60+150*3.25+((a-200)*4.35);
		printf("%f",ans);
	}
	else
	{
		printf("Invaluid");
	}

}


