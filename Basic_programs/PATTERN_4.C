#include <stdio.h>
#include<conio.h>

void pattern_77(int);

void main()
 {
   int n;
   clrscr();
   printf("Enter Number: ");
   scanf("%d",&n);

   pattern_77(n);

    getch();
}

void pattern_75(int n)
{
	int i,j,num=1,temp;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		if(i%2 == 1)
		{
			for(j=1;j<=n+1-i;j++)
			{
				printf("%d",num);
				num++;
			}
		}
		else
		{
			temp = num + n - i;
			for(j=1;j<=n+1-i;j++)
			{
				printf("%d",temp);
				temp--;
				num++;
			}
		}
		printf("\n");
	}
}

void pattern_77(int n)
{

    int num = 6,i,j; 

     for (i = 0; i < n; i++) {
        
	for (j = 0; j < i; j++) {
	    printf("  ");
	}


	if (i == 1) {

	    printf("%d %d ", num - 1, num);
	    num -= 2;
	} else {
	    for (j = 0; j < n - i; j++) {
		printf("%d ", num--);
	    }
	}

	printf("\n");
    }
}
