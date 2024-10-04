#include <stdio.h>
 
int main(void)
{
  printf("## Program Bahasa C Menentukan Nama Bulan ## \n");
  printf("============================================ \n\n");
 
  int n;
 
  printf("Input angka bulan (1-12): ");
  scanf("%d",&n);
 
  if ( n == 1) {
    printf("Januari");
  }
  else if ( n == 2) {
    printf("Februari");
  }
  else if ( n == 3) {
    printf("Maret");
  }
  else if ( n == 4) {
    printf("April");
  }
  else if ( n == 5) {
    printf("Mei");
  }
  else if ( n == 6) {
    printf("Juni");
  }
  else if ( n == 7) {
    printf("Juli");
  }
  else if ( n == 8) {
    printf("Agustus");
  }
  else if ( n == 9) {
    printf("September");
  }
  else if ( n == 10) {
    printf("Oktober");
  }
  else if ( n == 11) {
    printf("November");
  }
  else if ( n == 12) {
    printf("Desember");
  }
  else {
    printf("Pilihan tidak tersedia");
  }
 
  printf("\n");
 
  return 0;
}
