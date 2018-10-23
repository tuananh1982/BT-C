#include<stdio.h>
#include<conio.h>
int main()
{
void Nhapmang(int array[100], int n);{
	for(int i=0;i<n;i++){
	printf("array[%d]=",i); scanf("%d",&array[i]);
    }
}

void inmang(int arr[100],int n){
	for (int i=0; i<n; i++){
		printf ("arr[%d]=%d",i,arr[i]);
    }
}

int giaithua(int n){
	int gt=1;
	for(int i=1; i<=n; i++) gt=gt*i;
	return gt;
}

int tonggiaithua(int arr[100], int n){
	
	int tong=0;
	for(int i=0; i<n; i++)
	tong=tong+giaithua(arr[i]);
	return tong;
}
}
