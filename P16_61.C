// This program is developed by Prof. Atul Oak
#include<stdio.h>
#include<conio.h>		// header files

int main( )
{

	int n,s,d,n1,i;		// variables to store data
//	clrscr();
	s = 0;
	printf("\n\n\t -- Program for Armstrong Number --");
	for(i=1; i<=1000; i++)		// check numbers from 1 to 1000
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
		printf("\n\n\t %d >> Armstrong Number",i);	// print Armstrong Number
	}
	getch();
	return 0;
}
