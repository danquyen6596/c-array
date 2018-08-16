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
	int a[N], i, n,min, local=0;
	printf("Nhap vao so phan tu cua day: ");
	scanf("%d", &n);
	printf("Nhap vao cac phan tu cua day: \n");
	for(i=0; i<n; i++)
		{	
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
	min = a[0];
	for(i=0; i<n; i++)
		{
			if(min>a[i])
				min = a[i];
				local = i;
		}
	printf("GTNN trong day la: %d", min);
	printf("\nVi tri cua GTNN la %d", local);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


