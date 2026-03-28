#include <stdio.h>

int main()
{
    int yas = 20;
    int ehliyet = 1; // 1: Var, 0: Yok
    int para = 5000;

    printf("Durum: Yas=20, Ehliyet=Var(1), Para=5000\n\n");

    // 1. VE Operatörü (&&) : Her iki koþul da doðru olmalý
    // "Hem yaþýn 18'den büyük OLMALI hem de ehliyetin OLMALI"
    printf("Araba surebilir mi? (yas >= 18 && ehliyet == 1): %d\n", (yas >= 18 && ehliyet == 1));

    // 2. VEYA Operatörü (||) : Koþullardan en az birinin doðru olmasý yeterli
    // "Ya 10000 liran OLMALI ya da ehliyetin OLMALI"
    printf("Yola cikabilir mi? (para >= 10000 || ehliyet == 1): %d\n", (para >= 10000 || ehliyet == 1));

    // 3. DEÐÝL Operatörü (!) : Sonucu tersine çevirir (Doðruyu Yanlýþ, Yanlýþý Doðru yapar)
    // "Ehliyetin YOK MU?"
    printf("Ehliyeti yok mu? (!ehliyet): %d\n", (!ehliyet)); // ehliyet 1 ise sonuç 0 olur.

    return 0;
}


