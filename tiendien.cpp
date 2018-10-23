#include<stdio.h>
#include<conio.h>

int main()
{
	int sodienmoi , sodiencu , tieuthu, tien;
	printf("nhap chu so dien moi: ");
	scanf("%d",&sodienmoi);
	
	printf("nhap chu so dien cu: ");
	scanf("%d",&sodiencu);
	tieuthu=sodienmoi - sodiencu;
	
	if(tieuthu<=50)
	{
		tien=tieuthu*1500;
		printf("so tien can tra la: %d VND",tien);
	}
	
	if(tieuthu>50 && tieuthu<=100)
	{
		tien=50*1500 + (tieuthu-50)*2000;
		printf("so tien phai tra la: %d VND",tien);
	}
	
	else
	{
		tien=50*1500 + 100*2000 +(tieuthu-150)*3000;
		printf("so tien phai tra la: %d VND",tien);
	}
	
	
	return 0;
}
