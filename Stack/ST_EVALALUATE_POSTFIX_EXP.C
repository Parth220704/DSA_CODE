#include <stdio.h>
#include <conio.h>
#define MAX 30

char pop();
void push1(double);
int pop1();
void push(char);

char stack[MAX];
int stack1[MAX];
int top = -1;
int top1 = -1;

void push1(double n)
{
	if(top1 >= MAX)
	{
		printf("Stack 1 is overflow");
	}
	else
	{
		top1++;
		stack1[top1] = n;
	}
}

int pop1()
{
	if (top1 == -1)
	{
		return 0;
	}
	else
	{
		top1--;
		return stack1[top1+1];
	}
}

void evl(char postfix[])
{
	int i,t;
	int p1, p2, p3;

	for(i = 0; postfix[i]!= '\0'; i++)
	{
		if(isdigit(postfix[i]))
		{
			t = (int)postfix[i] - '0';
			push1(t);
		}
		else
		{
			p1 = pop1();
			p2 = pop1();

			if(postfix[i] == '+')
			{
				p3 = p2 + p1;
				push1(p3);
			}
			else if(postfix[i] == '-')
			{
				p3 = p2 - p1;
				push1(p3);
			}
			else if(postfix[i] == '*')
			{
				p3 = p2 * p1;
				push1(p3);
			}
			else if(postfix[i] == '/')
			{
				p3= p2 / p1;
				push1(p3);
			}
			else
			{
				p3=pow(p2,p1);
				push1(p3);
			}

		}
	}
	printf("Evalution : %d",pop1());
}

void push(char c) {
    if (top >= MAX) {
	printf("Stack Overflow.");
    }  else
    {
	top++;
	stack[top] = c;
    }
}

char pop() {
    if (top == -1) {
	return 0;
    }
    else
    {
	top--;
	return stack[top+1];
    }
}

int precedence(char c) {
    if (c == '^')
    {
	return 3;
    }
    else if (c == '*' || c == '/' || c == '%')
    {
	 return 2;
    }
    else if (c == '+' || c == '-')
    {
	return 1;
    }
    else
    {
	return 0;
    }
}

void infixToPostfix(char infix[], char postfix[]) {
    int i, j = 0;

    for (i = 0; infix[i] != '\0'; i++)
    {
	if (isalpha(infix[i]) || isdigit(infix[i]))
	{
	    postfix[j] = infix[i];
	    j++;
	}
	else if (infix[i] == '(')
	{
	    push(infix[i]);
	}
	else if (infix[i] == ')')
	{
	    while (top != -1 && stack[top] != '(')
	    {
		postfix[j] = pop();
		j++;
	    }
	    pop();
	}
	else
	{
	    while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) {
		postfix[j++] = pop();
	    }
	    push(infix[i]);
	}
    }


    while (top != -1) {
	postfix[j] = pop();
	j++;
    }
    postfix[j] = '\0';
}

void main() {
    char infix[MAX], postfix[MAX];

    clrscr();

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix,postfix);

    printf("Postfix expression: %s\n", postfix);

    evl(postfix);

    getch();
}