#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

int main()

{	
	
	char *s=(char*)malloc (120*sizeof(char));
	char *str=(char*)malloc (120*sizeof(char));
	printf("Nhap vao mot chuoi bat ki: ");
	gets(s);
	
	// In ra xau dao nguoc
	char *temp; // Chuoi dao nguoc
	int n=strlen(s); // Gan n bang do dai cua chuoi
	int i=0;
	temp = (char*)malloc(sizeof(n+1)); // Cap phat bo nho cho chuoi dao nguoc
	while (i<n)
		{
			temp[i]=s[n-i-1];
			++i;
		}
	temp[i]=0;
		
	// In ra do ra cua xau
	int cout = 0;
	char *temp1;
	int j = 0;
	temp1 = s[0];
	while (temp1 != '\0')
		{
			cout++;
			temp1 = s[++j];
		}

	printf("\nXau duoc nhap vao la: %s:",s);
	printf("\nXau sau khi dao nguoc: %s",temp);
	printf("\nDo dai cua xau vua nhap la: %d",cout);
	
// Chuyen xau thanh chu hoa
	int k=0;
	char *temp2;
	temp2 = s[k];
	printf("\nXau sau khi doi thanh chu hoa la:");
	while (temp2)
		{
			putchar (toupper(temp2)); // putchar ham ghi ki tu da duoc xac dinh
			temp2=s[++k];
		}
// Chuyen xau thanh chu thuong
	int l=0;
	char *temp3;
	temp3 = s[l];
	printf("\nXau sau khi doi thanh chu thuong la:");
	while (temp3)
		{
			putchar (tolower(temp3));
			temp3=s[++l];
		}
// Chi in hoa ki tu dau tien trong xau
	int m=0;
	char *temp4;
	temp4 = s[m];
	printf("\nXau chi in hoa ki tu dau la:");
		putchar (toupper(temp4));
			while (temp4)
				{
					temp4=s[++m];
					putchar (tolower(temp4));
				
				}
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


