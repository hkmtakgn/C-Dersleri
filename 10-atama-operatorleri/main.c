#include <stdio.h>

int main()
{
    int a = 10; // Temel atama: a'ya 10 deðerini ver.
    int b = 5;

    printf("Baslangic degerleri: a = %d, b = %d\n", a, b);

    // 1. Toplayarak Atama (+=)
    // a = a + b; ile aynidir.
    a += b;
    printf("a += b sonrasi a: %d\n", a); // 10 + 5 = 15

    // 2. Cikararak Atama (-=)
    // a = a - 5; ile aynidir.
    a -= 5;
    printf("a -= 5 sonrasi a: %d\n", a); // 15 - 5 = 10

    // 3. Carparak Atama (*=)
    // a = a * 2; ile aynidir.
    a *= 2;
    printf("a *= 2 sonrasi a: %d\n", a); // 10 * 2 = 20

    // 4. Bolerek Atama (/=)
    // a = a / 4; ile aynidir.
    a /= 4;
    printf("a /= 4 sonrasi a: %d\n", a); // 20 / 4 = 5

    // 5. Mod Alarak Atama (%=)
    // a = a % 3; ile aynidir.
    a %= 3;
    printf("a %%= 3 sonrasi a: %d\n", a); // 5'in 3'e bolumunden kalan 2'dir.

    return 0;
}


