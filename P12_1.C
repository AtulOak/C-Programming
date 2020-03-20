// This program is developed by Prof. Atul Oak
#include<stdio.h>
#include<conio.h>	// header file

int main( )
{
	int n,r,i;
	long fn, fr, fcr,ncr;	// variables to store data
	fn = 1; fr = 1; fcr = 1;
//	clrscr( );
	printf("\n\n\t memory of int = %d", sizeof(fn));	// use of sizeof operator to check memory requirement
	printf("\n\n\t Pl. enter number n > ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("\n\n\t Invalid data");
		return 0;
	}
	printf("\n\n\t Pl. enter number r > ");
	scanf("%d", &r);
	if(r<0)
	{
		printf("\n\n\t Invalid data");
		return 0;
	}
	for(i=1; i<=n;i++)
		fn = fn * i;       // loop to calculate factorialof n
	for(i=1; i<=r;i++)
		fr = fr * i;       // loop to calculate factorial of r
	for(i=1; i<=n-r;i++)
		fcr = fcr * i;       // loop to calculate factorial of n-r
	ncr = (fn)/(fr*fcr);
	printf("\n\n\t factorial = %ld",ncr);
	getch( );
	return 0;
}
