#include <stdio.h>
#include <stdlib.h>

// #define kullanýmý: Derleyiciye "PI gördüðün her yere 3.14 yaz" der.
// Sonuna noktalý virgül (;) konulmaz!
#define PI 3.14

int main()
{
    // const kullanýmý: Bir deðiþkeni "salt okunur" yapar.
    // Veri tipi (char, int vb.) belirtilmek zorundadýr.
    const char bas_harf = 'H';
    const int dogum_yili = 1994;

    printf("Bas Harf: %c\n", bas_harf);   // const ile tanýmlanan karakteri yazdýrýr
    printf("Dogum Yili: %d\n", dogum_yili); // const ile tanýmlanan tam sayýyý yazdýrýr
    printf("PI Degeri: %.2f\n", PI);      // #define ile tanýmlanan sabiti yazdýrýr

    // HATA DENEMESÝ (Aþaðýdaki satýrlarý açarsan kod hata verir):
    // bas_harf = 'A';  // HATA! const deðiþtirilemez.
    // PI = 3.15;       // HATA! #define bir deðiþken deðil, deðiþtirilemez.

    return 0;
}
