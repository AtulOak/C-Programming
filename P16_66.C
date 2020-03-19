// This Program is developed by Prof. Atul Oak
#include<stdio.h>
#include<conio.h>


int main( )
{

	int n,s,d,n1;		// variables to store data
//	clrscr();
	s = 0;
	printf("\n\n\t -- Program for Armstrong Number --");
	do
	{			// data validation for postive numbers
	printf("\n\n\t Pl. enter number >> ");
	scanf("%d", &n);
	}
	while(n<=0);
	n1 = n;
	while(n>0)
	{
		d = n%10;
		s = s+d*d*d;	// check if number is Armstrong Number
		n = n/10;
	}
	s==n1 ? printf("\n\n\t %d is Armstrong Number",n1) : printf("\n\n\t %d is not Armstrong Number ",n1);
	getch();
	return 0;
}
