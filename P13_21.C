// This program is developed by Prof. Atul Oak
#include<stdio.h>
#include<conio.h>

int main( )
{
	int n,i,j,k,sn = 1;
	float t, s = 0.0;
//	clrscr();
	printf("\n\n\t -- sum of series 1/2 - 3/4 + 5/6....+ n");
	printf("\n\n\t Pl. enter n > ");
	scanf("%d", &n);
	for(i=1,j=2,k=1; k<=n; i=i+2,j=j+2,k++)

	{
		t = (float)i/j;
		t =  t * sn;
		s = s + t;    // loop  to generate term & add
		sn = sn * (-1);


	}
	printf("\n\n\t sum = %f", s);
	getch();
	return 0;
}
