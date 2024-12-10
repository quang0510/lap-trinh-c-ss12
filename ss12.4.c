#include<stdio.h>
int soLonNhat(number[],size1){
	int max=number[0];
	for(int i=0;i<size;i++){
		if(max<number[i]){
			max=number[i];
		}
}
	return max;
	
}
int main(){
	int arr[5]={2,5,6,3,9};
	int size= sizeof(arr)/sizeof(int);
	int maxNumber=soLonNhat(arr,size);
	printf("so lon nhat trong mang la %d ", maxNumber);
	return 0;
}
