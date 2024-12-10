#include<stdio.h>
int perfectNumber(int number){
    int sum = 0;
    for (int i = 1; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num1,num2;
    printf("Nhap so nguyen thu nhat : ");
    scanf("%d",&num1);
    perfectNumber(num1);
    printf("Nhap so nguyen thu hai : ");
    scanf("%d",&num2);
    if(perfectNumber(num1)){
    	printf("%d la so hoan hao",num1);
	}else{
		printf("%d k phai so hoan hao",num1);
	}
	if(perfectNumber(num2)){
    	printf("%d la so hoan hao",num2);
	}else{
		printf("%d k phai so hoan hao",num2);
	}
    
}
