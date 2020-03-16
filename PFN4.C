
// This program is developed by Prof. Atul Oak
// This program shows use of UDF for developing MENU Driven Programs

#include<stdio.h>
#include<conio.h>			// header files

void calculator(int, int);   // function prototype

int main( )
{
	int a,b;
//	clrscr( );
	printf("\n\n\t Pl. enter two integer data > ");
	scanf("%d%d", &a,&b);
	calculator(a,b);  // function call
	getch( );
	return 0;
}
void calculator(int r, int s)  // function declaration
{
	int rs;
	int c1;
	printf("\n\n\t Pl.enter 1=ADD, 2=SUB, 3=MUL, 4=Div(Q), 5=Div(R) ");
	scanf("%d", &c1);
	switch(c1)
	{
	case 1:	rs = r + s;        // function code
			printf("\n\n\t sum = %d" , rs);
			break;
	case 2:	rs = r - s;
			printf("\n\n\t difference = %d", rs);
			break;
	case 3:	rs = r * s;
			printf("\n\n\t multiplication = %d", rs);
			break;
	case 4:	rs = r / s;
			printf("\n\n\t quotient = %d", rs);
			break;
	case 5:	rs = r % s;
			printf("\n\n\t remainder = %d", rs);
			break;
	default:printf("\n\n\t Invalid data");
	}	
}
