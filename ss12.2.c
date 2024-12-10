#include<stdio.h>
int inCacPhanTu(int number[], int size){
	for(int i=0;i<size;i++){
		printf("number[%d]=%d\n",i ,number[i]);
	}
	return 1;
	
}
int main(){
	int arr[5]={32,63,7,22,74};
	int size1=sizeof(arr)/sizeof(int);
	inCacPhanTu(arr,size1);
	
	return 0;
}
