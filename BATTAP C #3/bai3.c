#include<stdio.h>
#include<math.h>
int main(){
	float r;
	printf("nhap vao ban kinh hinh tron: ");
	scanf("%f",&r);
	float C = 2*M_PI*r;
	float S = M_PI * r*r;	
	printf("Chu vi hinh tron: %.2f \n",C);
	printf("Dien tich hinh tron: %.2f \n",S);
	return 0;
}
