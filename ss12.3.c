#include<stdio.h>
int tinhGiaiThua(int n){
	int giaiThua=1;
	for(int i=1; i<=n;i++){
	giaiThua *= i;
	}
	printf("ket qua tinh giai thua cua %d la %d", n, giaiThua);
	
	return giaiThua;
}
int main(){
	int a;
	printf("Moi ban nhap so de tinh giai thua : ");
	scanf("%d",&a);
	tinhGiaiThua(a);
	return 0;
}
