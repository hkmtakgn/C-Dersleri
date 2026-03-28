#include <stdio.h>
#include <stdlib.h>

/*
#define PI 3.14
#define circleArea(r) (PI*r*r)


int main()
{
    int r = 3;
    float sonuc;
    sonuc = circleArea (r);
    printf("sonuc : %.2f\n",sonuc);
    return 0;
}
*/
/* --------------------------------------------------------------- */
/*
void alanaHesapla(int *a,int *b,int *alan)
{
    *alan = *a * *b;
}

int main()
{
    int a,b,alan;
    printf("A kenari girin :\n");
    scanf("%d",&a);
    printf("B kenari girin :\n");
    scanf("%d",&b);
    alanaHesapla(&a,&b,&alan);
    printf("Alan : %d\n",alan);
    return 0;
}

*/
/* --------------------------------------------------------------- */
/*
void squareArea (int *a,int *area)
{
    *area = *a * *a;

}

int main ()
{
    int a,area;
    printf("Kenar uzunlugu girin :\n");
    scanf("%d",&a);
    squareArea(&a,&area);
    printf("Alan : %d\n",area);
    return 0;
}
*/
/* --------------------------------------------------------------- */
/*
#define squareArea(a) (a*a)

int main ()
{
    int a,area;
    printf("Kenar uzunlugu girin :\n");
    scanf("%d",&a);
    area = squareArea(a);
    printf("Alan : %d\n",area);
    return 0;
}

*/
/* --------------------------------------------------------------- */
/*
float ucgenAlan (int b,int h)
{
    float uAlan;
    uAlan = (float)(b * h)/2;
    return uAlan;
}

int main ()
{
    int b,h;
    float alan;
    printf("b uzunlugu girin :\n");
    scanf("%d",&b);
    printf("h yuksekligi girin : \n");
    scanf("%d",&h);
    alan = ucgenAlan(b,h);
    printf("Alan : %.2f\n",alan);
}
*/
/* --------------------------------------------------------------- */
#include <math.h>

float kareAlan (float a)
{
    float alan;
    alan = (float)pow(a,2);
    return alan;
}

int main ()
{
    float a,kareAlani;
    printf("Kare alani hesaplamak icin kenar uzunlugu girin :\n");
    scanf("%f",&a);
    kareAlani = kareAlan(a);
    printf("Karenin alani : %.2f\n",kareAlani);
}
/* --------------------------------------------------------------- */
