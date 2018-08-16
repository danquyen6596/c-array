#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 100

int main()

{	
	char *s1=(char*)malloc(sizeof(char));
	char *s2=(char*)malloc(sizeof(char));
	printf("Nhap vao mot xau bat ki: \n");
	gets(s1);
	
	int n = strlen(s1);
	int i, j=0;
	for(i=n-1; i>=0; i--)
		{
			s2[j]=s1[i];
			j++;
		}
	s2[n]='\0';
	printf("Chuoi dao nguoc chuoi s1 la:");
	puts(s2);

	printf("\n=========================================\nPROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


