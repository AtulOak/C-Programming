// This program is developed by Prof. Atul Oak
#include<stdio.h>
#include<conio.h>	// header files

int main( )
{

	char c;			// variables to store data
//	clrscr();
	printf("\n\n\t Pl. enter a charcter > ");
	scanf("%c", &c);
	switch(c)		// check for vowel or consonant
	{
	case 'A':
	case 'a':
	case 'i':
	case 'I':
	case 'O':
	case 'o':
	case 'E':
	case 'e':
	case 'U':
    case 'u': printf("\n\n\t >> Vowel character ");break;
    default:  if((((int)c>=65)&&((int)c<=90))  ||  (((int)c>=97)&&((int)c<=122)))	// Check for Consonant 
			  printf("\n\n\t Consonant Character");
			  else
			  printf("\n\n\t not an alphabet ");
	
	}
	getch();
	return 0;
}

