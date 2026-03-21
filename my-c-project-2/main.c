#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    float sayi2;
    char ad_basharf;
    printf("Ýlk sayýyý girin : \n");
    scanf("%d",&sayi1);
    printf("Ýkinci sayýyý girin : \n");
    scanf("%f",&sayi2);
    printf("Adýnýzýn baþ harfini girin : \n");
    scanf(" %c",&ad_basharf);
    printf("Ýlk sayý : %d,Ýkinci sayý : %f,Adýnýzýn baþ harfi : %c\n",sayi1,sayi2,ad_basharf);
    return 0;
}
