#include <stdio.h>
#include <math.h>


int main(void){
	printf("## program saya##\n");
	printf("-----------------\n\n");
	
	float alas, tinggi, sisi_miring, keliling;
	printf("input alas segitiga: ");
	scanf("%f", &alas);
	printf("input tinggi segitiga: ");
	scanf("%f", &tinggi);
	printf("\n");
	
	sisi_miring= sqrt((alas*alas) + (tinggi*tinggi));
	keliling= alas+tinggi+sisi_miring;
	
	printf("panjang sisi miring = %.2f \n",sisi_miring);
	printf("keliling segitiga =%.2f \n",keliling);
	
	return 0;
}
