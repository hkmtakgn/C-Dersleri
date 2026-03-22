#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deðiþken Tanýmlamalarý
    int sayi1 = 15;
    int sayi2 = 20;
    float sayi3 = 3.33;
    double sayi4 = 313.145326;

    // 1. TEK SATIRLIK YORUM (Single-line Comment):
    // Ýki eðik çizgi (//) ile baþlar. Sadece o satýrý etkisiz hale getirir.

    printf("%d\n", sayi1); // sayi1 deðiþkenini ekrana yazdýrýr.
    printf("%d\n", sayi2); // Bu satýrýn baþýndaki // iþaretini kaldýrdýk, artýk çalýþýr.

    // 2. ÇOK SATIRLIK YORUM (Multi-line Comment):
    /* Bu iþaretler arasýna alýnan
       tüm satýrlar bilgisayar tarafýndan
       göz ardý edilir ve çalýþtýrýlmaz.
    printf("%f\n", sayi3);  // float tipindeki sayi3'ü yazdýrýr.
    printf("%lf\n", sayi4); // double tipindeki sayi4'ü yazdýrýr.

    */

    // Aþaðýdaki bloktaki /* ve */ iþaretlerini kaldýrdýk, böylece kod aktif oldu:

    printf("%f\n", sayi3);  // float tipindeki sayi3'ü yazdýrýr.
    printf("%lf\n", sayi4); // double tipindeki sayi4'ü yazdýrýr.

    return 0;
}
