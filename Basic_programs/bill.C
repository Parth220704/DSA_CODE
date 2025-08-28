#include<stdio.h>
#include<conio.h>
float  bill(float);
void main()
{
	float a,p;
	clrscr();
	printf("Enter Unit:");
	scanf("%f",&a);
	p=bill(a);
	printf("Bill Is:%f",p);
	getch();
}
float bill(float x)
{
	float r;
	if(x>=1 && x<50)
	{
		r=x*2.30;
	}
	else if(x>=50 && x<=150)
	{
		r=x*2.60;
	}
	else if(x>=150 && x<=300)
	{
		r=x*3.25;
	}
	else if(x>300)
	{
		r=x*4.35;
	}
	else{
		r=0;
	}
	return r;
}
