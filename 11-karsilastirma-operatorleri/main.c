#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int c = 10;

    printf("Degerler: a=10, b=5, c=10\n\n");

    // 1. Eþittir (==) : Ýki deðer eþit mi?
    printf("a == c : %d (Dogru oldugu icin 1)\n", a == c);

    // 2. Eþit Deðildir (!=) : Ýki deðer birbirinden farklý mý?
    printf("a != b : %d (Farkli olduklari icin 1)\n", a != b);

    // 3. Küçüktür (<)
    printf("b < a  : %d (5, 10'dan kucuk oldugu icin 1)\n", b < a);

    // 4. Büyüktür (>)
    printf("b > a  : %d (5, 10'dan buyuk olmadigi icin 0)\n", b > a);

    // 5. Küçük Eþittir (<=)
    printf("a <= c : %d (10, 10'a esit oldugu icin 1)\n", a <= c);

    // 6. Büyük Eþittir (>=)
    printf("b >= a : %d (5, 10'dan buyuk veya esit olmadigi icin 0)\n", b >= a);

    return 0;
}


