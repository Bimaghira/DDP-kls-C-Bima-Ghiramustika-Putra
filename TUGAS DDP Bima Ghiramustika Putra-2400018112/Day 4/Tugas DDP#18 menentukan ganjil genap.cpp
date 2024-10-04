#include <stdio.h>

int main(void){
	printf("## program bahasa C menentukan ganjil-genap ##\n");
	printf("______________________________________________\n");
	
	int x;
	
	printf("input sebuah angka : ");
	scanf("%d",&x);
	
	printf("\n");
	
	if (x % 2 == 0){
		printf("%d adalah bilangan genap \n",x);
	}
	else {
		printf("%d adalah bilangan ganjil \n",x);
	}
	
	return 0;
}
