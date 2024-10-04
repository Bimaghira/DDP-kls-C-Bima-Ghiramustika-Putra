#include <stdio.h>

int main(){
	printf("## program Bahasa C Cek Tahun Kabisat ##\n");
	printf("------------------------------------------\n");
	
	int year;
	
	printf("input tahun : ");
	scanf("%d",&year);
	
	if(year % 400==0){
		printf("%d adalah tahun kabisat \n",year);
	}
	else if(year % 100 == 0){
		printf("%d bukan tahun kabisat \n",year);
	}
	else if(year % 4==0){
		printf("%d adalah tahun kabisat",year);
	}
	else {
		printf("%d bukan tahun kabisat \n",year);
	}
	return 0;
}
