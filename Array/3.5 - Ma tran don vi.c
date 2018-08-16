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
	int a[N][N], i, j, n, pass1, pass2;
	printf("Nhap vao so cot & so dong cua ma tran: ");
	scanf("%d", &n);
	printf("Nhap vao cac phan tu cua ma tran: \n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			{	
				printf("a[%d][%d]= ",i,j);
				scanf("%d",&a[i][j]);
			}
	
	system("cls");
	printf("Ma tran vua nhap vao la: \n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			
				printf("%3d %c", a[i][j], (j==n-1)?'\n':' ');
	
	for(i=0; i<n; i++)
		if(a[i][i] == 1)
			pass1 = 1;
		else
			{
				pass1 = 0;
				break;
			}
		
	for(i=0; i<n; i++)
		{
		for(j=i+1; j<n; j++)
			{
				if(a[i][j] ==0 && a[j][i] == 0)
				pass2 = 1;
				else
					{
						pass2 = 0;
						break;
					}
			}
		if(pass2==0) break;
		}
	
	if(pass1==1 && pass2 ==1)
	printf("\nMa tran vua nhap la ma tran don vi");
	else printf("\nMa tran vua nhap khong phai la ma tran don vi @@");
	
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


