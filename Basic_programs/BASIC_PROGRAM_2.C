#include<stdio.h>
#include<conio.h>
void sumofdigit();
void reverse();
void palindrome();
void leapyear();
void convert();
void order();
void sumofn();
void isprime();
void firstandlastnumsum();
void pattern1();
void main()
{
	int ch;
	clrscr();
	do{
		printf("\n1.sum of digit\n2.reverse\n.3palindrome\n4.leapyear\n5.day into year\n6.decending order\n7.sum less then 50\n8.first 50 prime number\n9.first and last num sum\n10.pattern1\nEnter Your Choice :");
		scanf("%d",&ch);
		if(ch==0){
			exit(0);
		}
		switch(ch){
		     case 1:
			  sumofdigit();
			  break;
		     case 2:
			  reverse();
			  break;
		     case 3:
			  palindrome();
			  break;
		     case 4:
			  leapyear();
			  break;
		     case 5:
			  convert();
			  break;
		     case 6:
			  order();
			  break;
		     case 7:
			  sumofn();
			  break;
		     case 8:
			  isprime();
			  break;
		     case 9:
			  firstandlastnumsum();
			  break;
		     case 10:
			  pattern1();
			  break;
		     default:
			  printf("Invalid\n");
		}
	}while(1);
}
void sumofdigit()
{
	int n,sum=0,rem=0;
	printf("Enter number: \n");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("%d",sum);
}
void reverse()
{
	int n,sum=0,rem=0;
	printf("Enter number: \n");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum*10 +rem;
		n=n/10;
	}
	printf("%d",sum);
}
void palindrome(){
	int n,rem=0,sum=0,t;
	printf("enter number: \n");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		rem=n%10;
		sum=sum*10 + rem;
		n=n/10;
	}
	if(t==sum){
		printf("palindrome\n");
	}
	else{
		printf("not palindrome\n");
	}
}
void leapyear()
{
	int year;
	printf("Enter Year : ");
	scanf("%d",&year);
	if((year%100==0 && year %400==0) || year % 4 ==0)
	{
		printf("YEs");
	}
	else
	{
		printf("NOt");
	}
}
void convert(){

	int year,day,month;
	printf("enter day: \n");
	scanf("%d",&day);
	year=day/365;
	day=day%365;
	month=day/30;
	day=day%30;
	printf("year : %d, month : %d, day : %d\n",year,month,day);
}
void order()
{
	int n1,n2,n3;
	printf("enter n1 n3 n3: \n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3){
		if(n2>n3)
		{
			printf("%d %d %d",n1,n2,n3);
		}
		else{
			printf("%d %d %d",n1,n3,n2);
		}
	}else if(n2>n1 && n2>n3){
		if(n1>n3){
			printf("%d %d %d",n2,n1,n3);
		}
		else{
			printf("%d %d %d",n2,n3,n1);
		}

	}else if(n3>n1 && n3>n2){
		if(n2>n1){
			printf("%d %d %d",n3,n2,n1);
		}
		else{
			printf("%d %d %d",n3,n1,n2);
		}
	}
}
void sumofn()
{
	int n,sum=0;
	while(sum<50){
		printf("enter n: \n");
		scanf("%d",&n);
		sum=sum+n;
		printf("%d",sum);
	}
	printf("%d",sum);
}
void isprime(){
	int flag=0,i,count=0,n=1;
	while(count<50){
		flag=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		if(count%5==0){
			printf("\n");
		}
		printf("%d ",n);
		count++;
	}
	n++;
	}
}
void firstandlastnumsum()
{
	int n,sum=0;
	printf("Enter number: \n");
	scanf("%d",&n);
	sum=(n%10)+(n/1000);
	printf("%d\n",sum);
}
void pattern1()
{
	int n,i,j;
	printf("enter n: ");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=n;j>i;j--){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}