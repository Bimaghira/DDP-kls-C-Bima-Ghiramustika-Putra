#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Masukkan bebas: ");
    fgets(str, sizeof(str), stdin);

    // Menghapus newline jika ada
    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);
    printf("Panjang string adalah: %d\n", length);

    return 0;
}
