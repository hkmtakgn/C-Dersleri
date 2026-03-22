#include <stdio.h>
#include <stdlib.h>

int main()
{
    // --- FLOAT VERÝ TÝPÝ ---
    // 1. Bellekte 4 byte (32 bit) yer kaplar.
    // 2. "Single Precision" (Tek Duyarlýklý) olarak adlandýrýlýr.
    // 3. Virgülden sonra yaklaþýk 6-7 basamak hassasiyeti vardýr.
    float sayi1;

    // --- DOUBLE VERÝ TÝPÝ ---
    // 1. Bellekte 8 byte (64 bit) yer kaplar (Float'ýn iki katý).
    // 2. "Double Precision" (Çift Duyarlýklý) olarak adlandýrýlýr.
    // 3. Virgülden sonra yaklaþýk 15-17 basamak hassasiyeti vardýr.
    // 4. Bilimsel ve çok hassas hesaplamalarda tercih edilir.
    double sayi2;

    sayi1 = 3.33f;        // 'f' harfi, sayýnýn literal olarak float olduðunu belirtir.
    sayi2 = 33.31399;     // C dilinde ondalýklý sayýlar varsayýlan olarak double kabul edilir.

    // Yazdýrma Ýþlemleri:
    // %f -> float yazdýrmak için kullanýlýr.
    printf("sayi1 float: %f\n", sayi1);

    // %lf -> double yazdýrmak için kullanýlýr (long float).
    printf("sayi2 double: %lf\n", sayi2);

    return 0;
}
/*

Eğer 3.141592653589793 gibi çok uzun bir sayıyı float içine koyarsan,
sayı bir noktadan sonra yuvarlanır ve hatalı sonuç verir.
Bu yüzden finansal hesaplamalar veya
mühendislik uygulamalarında genellikle double tercih edilir.


*/

