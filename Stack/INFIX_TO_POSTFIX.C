#include<stdio.h>
#include<conio.h>
#define MAX 30


char stack[MAX];
int top = -1;

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
			while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) 
			{
				postfix[j++] = pop();
			}
			push(infix[i]);
		}
    }


    while (top != -1) 
	{
		postfix[j] = pop();
		j++;
    }
    postfix[j] = '\0';

}

void reverce(char infix[MAX])
{
	int i,j=0;
	char rev[MAX];
	int l=strlen(infix);
	for(i=l	;i>=0;i++)
	{
		if(infix[i] == '(')
		{
			rev[j] = ')';
			j++;
		}
		else if(infix[i] == ')')
		{
			rev[j] = '(';
			j++;
		}
		else
		{
			rev[j] = infix[i];
			j++;
		}
	}
	rev[j] = '\0';
}

void main() {
    char infix[MAX], postfix[MAX],rev[MAX];

    clrscr();

    printf("Enter an infix expression: ");
    scanf("%s", infix);

     reverce(infix);

    infixToPostfix(rev,postfix);
    puts(postfix);
    printf("POST : %s",postfix);

    reverce(postfix);

    printf("ANS : %s",rev);

    getch();
}


