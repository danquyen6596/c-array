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
	int a[N], i, j, n, x, temp;
	printf("Nhap vao so phan tu cua ma tran: ");
	scanf("%d", &n);
	printf("Nhap vao cac phan tu cua ma tran: \n");
	
	for(i=0; i<n; i++)
		{	
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}

	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
				if(a[i] > a[j])
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}

//	printf("Day so sau khi duoc sap xep la: ");
//	for(i=0; i<n; i++)
//	printf("  %d",a[i]);	
	
	printf("Nhap vao so can tim: ");
	scanf("%d",&x);
	
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");	
	getch();
	return 0;	
}


