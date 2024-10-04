#include <stdio.h>

int main(void){
	printf("## program bahasa C konversi suhu ##\n");
	printf("______________________________________\n");
	
	float celc, fahr, kelv, ream;
	
	printf("input suhu celcius : ");
	scanf("%f",&celc);
	printf("\n");
	
	fahr=(9.0/5.0 * celc) + 32;
	kelv=celc + 273.15;
	ream=celc * (4.0/5.0);
	
	printf("%.2f derajat celcius = %.2f derajat fahrenheit \n" ,celc,fahr);
	printf("%.2f derajat celcius = %.2f derajat kelvin \n",celc,kelv);
	printf("%.2f derajat celcius = %.2f derajat reamur \n",celc,ream);
	
	return 0;
}
