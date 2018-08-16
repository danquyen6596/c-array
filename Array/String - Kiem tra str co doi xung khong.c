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
	char *s=(char*)malloc(sizeof(char));
	printf("Nhap vao mot xau bat ki: \n");
	gets(s);
	
	int n = strlen(s);
	int i, pass;
	for(i=0; i<=n/2; i++)
		if(s[i]==s[n-i-1])
				pass=1;
		else
			{
				pass=0;
				break;
			}
			
	if(pass)
		printf("Chuoi vua nhap doi xung");
	else
		printf("Chuoi vua nhap khong doi xung");

	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


