#include<stdio.h>
#include<conio.h>
void isprime(int);
void main(){
	int n;
	clrscr();
	printf("ENTER N : ");
	scanf("%d",&n);
	isprime(n);
	getch();
}
void isprime(int n){
	int flag=0,i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
			printf("number is prime\n");
		}
		else{
			printf("number is not prime\n");
		}
}