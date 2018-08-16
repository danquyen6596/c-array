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
	int SpA[N], SpB[N], SpC[N], i, n, maxA, minC;
	int *p1, *p2, *p3;
	p1=SpA;
	p2=SpB;
	p3=SpC;
	
	printf("Nhap vao so cong nhan trong cong ty: ");
	scanf("%d", &n);
	
	printf("Nhap vao so san pham loai A cua tung CN: \n");
	for(i=0; i<n; i++)
		{	
			printf("CN[%d]= ",i+1);
			scanf("%d",(p1+i));
		}
	
	printf("Nhap vao so san pham loai B cua tung CN: \n");
	for(i=0; i<n; i++)
		{	
			printf("CONG NHAN[%d]= ",i+1);
			scanf("%d",(p2+i));
		}
	
	printf("Nhap vao so san pham loai C cua tung CN: \n");
	for(i=0; i<n; i++)
		{	
			printf("CONG NHAN[%d]= ",i+1);
			scanf("%d",(p3+i));
		}
	
	maxA=*p1, minC=*p3;
	for(i=0; i<n; i++)
		{
			if(maxA<*(p1+i))
				maxA=*(p1+i);
			if(minC>*(p3+i))
				minC=*(p3+i);
		}
	
//	system("cls");
	printf("\nCong nhan lam ra nhieu SP A nhat= %d SP la:\n", maxA);
	for(i=0; i<n; i++)
		{
			if(maxA==*(p1+i))
				printf("\tCONG NHAN[%d] \n",i+1);
		}	
	
	printf("\nCong nhan la ra it SP C nhat= %d SP la:\n",minC);
	for(i=0; i<n; i++)
		{
			if(minC==*(p3+i))
				printf("\tCONG NHAN[%d] \n",i+1);
		}	
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


