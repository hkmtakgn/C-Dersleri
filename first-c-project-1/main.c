#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    float total;
    printf("Sayý 1 girin : ");
    scanf("%d",&sayi1);
    printf("Sayý 2 girin : ");
    scanf("%d",&sayi2);
    total = sayi1 + sayi2;
    printf("Toplam sayý :\n");
    printf("%f",total);
    return 0;
}
