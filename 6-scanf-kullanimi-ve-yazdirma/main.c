#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1; // Kullanýcýnýn gireceði tam sayýyý saklamak için deðiþken
    int sayi2;

    // --- KULLANICIDAN VERÝ ALMA (scanf) ---

    printf("sayi1 girin : \n");
    // scanf: Klavyeden veri okur.
    // %d: Gelecek verinin tam sayý (int) olduðunu belirtir.
    // &sayi1: "Gelen sayýyý sayi1 deðiþkeninin bellekteki adresine yaz" demektir.
    scanf("%d", &sayi1);

    printf("sayi2 girin : \n");
    scanf("%d", &sayi2); // & iþareti (ampersand) scanf fonksiyonu için zorunludur.

    // --- EKRANA YAZDIRMA (printf) ---

    // printf içinde & iþareti kullanýlmaz! Sadece deðiþkenin adýný yazmamýz yeterlidir.
    printf("Girdiginiz sayi1: %d\n", sayi1);
    printf("Girdiginiz sayi2: %d\n", sayi2);

    return 0;
}

