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
	int SD[N], TD[N], i, n;
	int *p1, *p2;
	p1=SD, p2=TD;
	printf("Nhap vao so ho gia dinh: ");
	scanf("%d", &n);
	printf("Nhap vao chi so dien cac ho GD xa Duc Thuong: \n");
	for(i=0; i<n; i++)
		{	
			printf("CS dien GD[%d]= ",i+1);
			scanf("%d",(p1+i));
		}
	
	for(i=0; i<n; i++)
		{
			if(*(p1+i)>=1 && *(p1+i)<=99)
				*(p2+i)=*(p1+i)*1000;
			else
				if(*(p1+i)>=100 && *(p1+i)<=199)
					*(p2+i)=99000 + (*(p1+i)-99)*1400;
				else
					if(*(p1+i)>=200)
						*(p2+i)=239000 + (*(p1+i)-199)*2000;
					else
						*(p2+i)=0;
		}
	
	system("cls");	
	printf("Chi so dien va so tien dien cua cac ho GD xa Duc Thuong:\n");
	for(i=0; i<n; i++)
		printf("CS dien GD[%d]= %d \tSo tien= %d dong\n",i+1, *(p1+i), *(p2+i));
		
		
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


