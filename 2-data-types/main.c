#include <stdio.h>
#include <stdlib.h>

int main()
{
    // --- DEÐÝÞKEN TANIMLAMA VE VERÝ TÝPLERÝ ---

    int sayi1;      // integer: Tam sayýlarý tutar (Örn: -5, 0, 33). Genelde 4 byte yer kaplar.
    float sayi2;    // float: Tek duyarlýklý ondalýklý sayýlar. 6-7 basamak hassasiyeti vardýr. 4 byte.
    double sayi3;   // double: Çift duyarlýklý ondalýklý sayýlar. 15-17 basamak hassasiyeti vardýr. 8 byte.
    char harf;      // character: Tek bir karakter tutar (Örn: 'A', 'H'). ASCII karþýlýðý bir tam sayýdýr. 1 byte.

    // --- DEÐER ATAMA ---

    sayi1 = 33;
    sayi2 = 33.99f;     // 'f' takýsý bunun bir float olduðunu belirtir (opsiyonel ama iyi bir alýþkanlýktýr).
    sayi3 = 313.333;
    harf = 'H';

    // --- EKRANA YAZDIRMA ---

    // 1. Yazdýrma: Standart sýralama
    // %d: int, %f: float, %lf: double, %c: char için kullanýlýr.
    printf("1. Grup Yazdirma:\n");
    printf("%d\n%f\n%lf\n%c\n", sayi1, sayi2, sayi3, harf);

    printf("--------------------\n");

    // 2. Yazdýrma: Karýþýk sýralama
    // Önemli: Deðiþkenlerin sýrasý deðiþtiði için týrnak içindeki format belirleyicilerin sýrasý da deðiþti.
    printf("2. Grup Yazdirma (Sirasi Degismis):\n");
    printf("%c\n%d\n%f\n%lf\n", harf, sayi1, sayi2, sayi3);

    return 0;
}
