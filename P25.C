
// Program developed by Prof. Atul Oak

#include<stdio.h>
#include<conio.h>	// header files

int main( )
{
	int a,b,c,n,i,c1,i1,ch=0;
//	clrscr();
	a = 1;
	b = 0;			// initial elements
	i1 = 0;
	printf("\n\n\t -- Non Fibonacci elements --");
	printf("\n\n\t Pl. enter n > ");
	scanf("%d", &n);
	printf("\n\n\t -- Non Fibonacci elements > ");
	for(;;)
	{
	     c = a + b;	// generate element
	     for(i=a+1; i<c; i++)
	     {
		printf(" %d", i);	// display non fibonacci elements
		i1++;
		if(i1>=n)
		{
			ch = 1;
			break;
		}
	     }
	     if(ch==1)
		break;
	     b = a;
	     a = c;
	}
	getch();
	return 0;
}
