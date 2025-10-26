#include<stdio.h>;
 
 int main (){
 	int number,result;
 	printf("nhap so co bon chu so: ");
 	scanf("%d",&number);
 	int d1 = number % 10;
 	int d2 = (number / 10) % 10;
 	int d3 = (number / 100) % 10;
 	int d4 = number / 1000;
 	result = d1 * 1000 + d2 * 100 + d3 * 10 + d4 ;
 	printf("Ket qua la: %d", result);
 	return 0;
}
