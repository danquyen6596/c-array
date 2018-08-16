#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 1000

int main()

{	
	int SoNCNV[N], TLNV[N], i, n;
	int *p1, *p2;
	p1=SoNCNV, p2=TLNV;
	printf("Nhap vao so NV cong ty: ");
	scanf("%d", &n);
	printf("Nhap vao So ngay cong cua cac NV: \n");
	for(i=0; i<n; i++)
		{	
			printf("So NCNV[%d]= ",i+1);
			scanf("%d",(p1+i));
		}
	
	for(i=0; i<n; i++)
		{
			if(*(p1+i)==24)
				*(p2+i)=3000000;
			else
				if(*(p1+i) < 24)
					*(p2+i)=3000000 - (24 - *(p1+i))*150000;
				else
					if(*(p1+i) > 24)
						*(p2+i)=3000000 + (*(p1+i)-24)*100000;
			
		}
	
	system("cls");	
	printf("So ngay cong va tien luong cua NV cong ty An Huy la:\n");
	for(i=0; i<n; i++)
			printf("So NCNV[%d]= %d \tTien luong= %d \n", i+1, *(p1+i), *(p2+i));
		
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


