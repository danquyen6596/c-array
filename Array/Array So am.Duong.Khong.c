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
	int a[N], i, n, cout1, cout2, cout3;
	printf("Nhap vao so phan tu cua day: ");
	scanf("%d", &n);
	printf("Nhap vao cac phan tu cua day: \n");
	for(i=0; i<n; i++)
		{	
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
	
	cout1=0, cout2=0, cout3=0;
	for(i=0; i<n; i++)
		{
			if(a[i]<0)
				cout1++;
			else
				if(a[i]==0)
					cout2++;
				else
					if(a[i]>0)
						cout3++;
		}
	printf("So so hang am trong day la: %d", cout1);
	printf("\nSo so hang bang 0 trong day la: %d", cout2);
	printf("\nSo so hang duong trong day la: %d", cout3);

	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


