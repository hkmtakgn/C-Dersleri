#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deðiþken Tanýmlamalarý
    int sayi1 = 33;
    float sayi2 = 3.14;
    double sayi3 = 313.333939;
    char bas_harf = 'H';

    // --- sizeof() NEDÝR? ---
    // Bir deðiþkenin bellekte (RAM) kaç "byte" yer kapladýðýný tam sayý olarak verir.

    // sayi1 bir tam sayýdýr (int), bellekte genelde 4 birim yer kaplar.
    printf("int bellekteki boyutu    : %d byte\n", sizeof(sayi1));

    // sayi2 bir ondalýklý sayýdýr (float), bellekte genelde 4 birim yer kaplar.
    printf("float bellekteki boyutu  : %d byte\n", sizeof(sayi2));

    // sayi3 yüksek hassasiyetli ondalýklýdýr (double), float'ýn iki katý yer kaplar.
    printf("double bellekteki boyutu : %d byte\n", sizeof(sayi3));

    // bas_harf tek bir karakterdir (char), her zaman en küçük birim olan 1 byte kaplar.
    printf("char bellekteki boyutu   : %d byte\n", sizeof(bas_harf));

    return 0;
}
