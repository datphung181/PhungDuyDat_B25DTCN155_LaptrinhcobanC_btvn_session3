#include <stdio.h>
int main(){
	float celsius;
	printf("nhap vao do C: ");
	scanf("%f",&celsius);
	float result = celsius * 9/5 + 32;
	printf("Nhiet do Fahrenheit: %.2f",result);
	
	return 0;
}
