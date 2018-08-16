#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 100
#define M 100
#define K 100

int main()

{	
	int a[M][N], b[N][K], c[M][K], i, j, k, m, n, l, temp;
	printf("Nhap vao so dong cua ma tran thu nhat: ");
	scanf("%d", &m);
	printf("Nhap vao so cot (so dong) cua ma tran thu nhat (thu 2): ");
	scanf("%d", &n);
	printf("Nhap vao so cot cua ma tran thu 2: ");
	scanf("%d", &k);

	
	printf("\nNhap vao cac phan tu cua ma tran thu nhat: \n");
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		{	
			printf("a[%d][%d]= ",i,j);
			scanf("%d",a[i]+j);
		}
	
	printf("\nNhap vao cac phan tu cua ma tran thu hai: \n");
	for(i=0; i<n; i++)
		for(j=0; j<k; j++)
		{	
			printf("b[%d][%d]= ",i,j);
			scanf("%d",b[i]+j);
		}
	system("cls");
	printf("\nMa tran thu nhat la: \n");
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		{	
			printf("%3d %c",a[i][j], (j==n-1)?'\n':' ');
			
		}
		
	printf("\nMa tran thu hai la: \n");
	for(i=0; i<n; i++)
		for(j=0; j<k; j++)
		{	
			printf("%3d %c",b[i][j], (j==k-1)?'\n':' ');
			
		}
		
	//Tinh tich 2 ma tran a,b

	for(i=0; i<m; i++)
		for(j=0; j<k; j++)
			for(l=0; l<n; l++)
					c[i][j]+=a[i][l]*b[l][j];
					
					
	printf("\nTich cua hai ma tran la:\n");
	for(i=0; i<m; i++)
		for(j=0; j<k; j++)
		{	
			printf("%3d %c",c[i][j], (j==k-1)?'\n':' ');
			
		}
		
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


