#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;
    int sonuc_int;
    float sonuc_float;

    // 1. TOPLAMA (+) : Ýki sayýyý toplar
    sonuc_int = a + b; // 10 + 3 = 13
    printf("Toplama (10 + 3) = %d\n", sonuc_int);

    // 2. ÇIKARMA (-) : Ýlk sayýdan ikinciyi çýkarýr
    sonuc_int = a - b; // 10 - 3 = 7
    printf("Cikarma (10 - 3) = %d\n", sonuc_int);

    // 3. ÇARPMA (*) : Ýki sayýyý çarpar
    sonuc_int = a * b; // 10 * 3 = 30
    printf("Carpma  (10 * 3) = %d\n", sonuc_int);

    // 4. BÖLME (/) : Sayýyý böler
    // DÝKKAT: Ýki tam sayý bölünürse sonuç tam sayý çýkar (ondalýk atýlýr).
    sonuc_int = a / b; // 10 / 3 = 3 (3.33 deðil!)
    printf("Tam Sayi Bolme (10 / 3) = %d\n", sonuc_int);

    // Virgüllü sonuç almak için sayýlardan biri float olmalý:
    sonuc_float = (float)a / b; // 10.0 / 3 = 3.33
    printf("Ondalikli Bolme (10 / 3) = %.2f\n", sonuc_float);

    // 5. MODÜL (%) : Bölme iþleminden kalan tam sayýyý verir
    // Sadece tam sayýlar (int, char) ile kullanýlýr.
    sonuc_int = a % b; // 10'un 3'e bölümünden kalan 1'dir.
    printf("Modul (10 %% 3) = %d\n", sonuc_int);

    return 0;
}

