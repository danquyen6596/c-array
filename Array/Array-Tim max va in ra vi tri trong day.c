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
	int a[N], i, n, max, local=0;

	printf("Nhap vao so phan tu cua day: ");
	scanf("%d", &n);
	printf("Nhap vao cac phan tu cua day: \n");
	for(i=0; i<n; i++)
		{	
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
	max = a[0];
	for(i=0; i<n; i++)
		{
			if(max<a[i])
				max = a[i];
				local = i;
		}
	printf("GTLL trong day la: %d", max);
	printf("\nVi tri cua GTLL la %d", local);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


