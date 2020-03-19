#include<stdio.h>
#include<conio.h>

int main( )
{

	int n,s,d,n1,i;
//	clrscr();
	s = 0;
	printf("\n\n\t -- Program for Armstrong Number --");
	for(i=1; i<=1000; i++)
	{
	n = i;
	s=0;
	while(n>0)
	{
		d = n%10;
		s = s+d*d*d;
		n = n/10;
	}
	if(s == i)
		printf("\n\n\t %d >> Armstrong Number",i);
	}
	getch();
	return 0;
}
