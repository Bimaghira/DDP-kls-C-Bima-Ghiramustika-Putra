#include <stdio.h>

int main(void){
	printf("## program saya\n");
	printf("-----------------\n\n");
	
	int n;
	
	printf("input angka hari (senin-minggu) : ");
	scanf("%d",&n);
	
	if(n==1){
		printf("senin");
	}
	else if (n==2){
		printf("selasa");
	}
	else if (n==3){
		printf("rabu");
	}
	else if (n==4){
		printf("kamis");
	}
	else if (n==5){
		printf("jumat");
	}
	else if (n==6){
		printf("sabtu");
	}
	else if (n==7){
		printf("minggu");
	}
	else{
		printf("pilihan tidak tersedia");
	}
	
	printf("\n");
	
	return 0;
}
