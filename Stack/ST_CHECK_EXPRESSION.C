#include<stdio.h>
#include<conio.h>
#define size 10

char stack[size];

char pop();
void push(char);
void check(char exp[]);
int top=-1;

void main()
{
	char exp[10];
	clrscr();
	printf("Enter Exp : ");
	gets(exp);
	check(exp);
	getch();
}

void check(char exp[10])
{
  int l,i,flag=0;
  char temp;
  l = strlen(exp);

  for(i=0;i<l;i++)
  {
	if(exp[i] == '(' || exp[i]=='{' || exp[i] == '[')
	{
		push(exp[i]);
	}

	if(exp[i] == ')' || exp[i]=='}' || exp[i] == ']')
	{

		temp = pop();
		if((temp == '(' && exp[i]==')') || (temp == '[' && exp[i]==']') || (temp == '{' && exp[i]=='}'))
		{
			flag = 1;
		}

	}
  }

  if(flag == 1)
  {
	printf("EXP Is Valid");
  }
  else
  {
	printf("EXP is Invalid");
  }
}

void push(char x)
{
	if(top >= size)
	{
		printf("Stack overflow");
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

char pop()
{
	if(top == -1)
	{
		return 0;
	}
	else
	{
		top--;
		return stack[top+1];
	}

}