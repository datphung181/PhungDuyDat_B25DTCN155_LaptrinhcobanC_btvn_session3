#include <stdio.h>
int main(){
	float a,b,c ;
	printf("nhap diem toan: ");
	scanf("%f",&a);
	printf("nhap diem van: ");
	scanf("%f",&b);
	printf("nhap diem anh: ");
	scanf("%f",&c);
	float sum = a+b+c;
	printf("Tong diem: %.2f \n",sum);
	float result = (a+b+c)/3;
	printf("Diem trung binh: %.2f",result);
	
	return 0;
}
