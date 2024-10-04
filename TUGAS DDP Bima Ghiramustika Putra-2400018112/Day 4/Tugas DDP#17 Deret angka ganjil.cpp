#include <stdio.h>

int main(void){
	printf("## program bahasa C deret angka ganjil ##\n");
	printf("__________________________________________\n");
	
	int jumlah_deret, i;
	
	printf("jumlah yang di inginkan : ");
	scanf("%d",&jumlah_deret);
	
	for (i=0;i<=jumlah_deret;i++){
		printf("%d ",i * 2 + 1);
	}
	
	printf("\n");
	
	return 0;
}


