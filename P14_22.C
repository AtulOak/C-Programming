#include<stdio.h>
#include<conio.h>

int main( )
{

	int n,i,sn=-1;
	float s;
//	clrscr();
	s = 1.0;
	printf("\n\n\t Sum of series 1 - 1/2 + 1/3 - .... n terms");
	printf("\n\n\t Pl. enter n > ");
	scanf("%d", &n);
	for (i=2; i<=n; i++)
	{
	     s = s +  sn* (1.0/i);
	     sn = sn * (-1);
	}
	printf("\n\n\t sum = %f", s);
	getch( );
	return 0;
}
