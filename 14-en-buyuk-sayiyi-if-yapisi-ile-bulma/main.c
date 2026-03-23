#include <stdio.h>

int main()
{
    int s1, s2, s3;

    printf("Uc adet sayi girin (Bosluk birakarak): ");
    scanf("%d %d %d", &s1, &s2, &s3);

    // s1 hem s2'den hem s3'den buyuk mu?
    if (s1 >= s2 && s1 >= s3) {
        printf("En buyuk sayi: %d\n", s1);
    }
    // Degilse, s2 hem s1'den hem s3'den buyuk mu?
    else if (s2 >= s1 && s2 >= s3) {
        printf("En buyuk sayi: %d\n", s2);
    }
    // Yukaridaki ikisi de degilse, en buyuk mecburen s3'tur.
    else {
        printf("En buyuk sayi: %d\n", s3);
    }

    return 0;
}
