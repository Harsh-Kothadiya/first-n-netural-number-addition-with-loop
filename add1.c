//first n netural number addition with loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,ans=0;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		ans=ans+i;
	}
	printf("\n\n----OUTPUT-----------------------\n");
	printf("\n\t FIRST  %d NUMBER ADDITION IS : %d",no,ans);
	getch();
}
