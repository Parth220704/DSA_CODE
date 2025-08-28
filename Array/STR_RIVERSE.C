#include<stdio.h>
#include<conio.h>
void main(){
	char ch[30],rev[30];
	int i,len,j=0;
	clrscr();
	printf("Enter string: \n");
	gets(ch);

	len=strlen(ch);
	for(i=len-1;i>=0;i--)
	{
		rev[j]=ch[i];
		j++;
	}
	for(i=0;rev[i]!='\0';i++)
	{
		printf("%c",rev[i]);
	}

	getch();

	}