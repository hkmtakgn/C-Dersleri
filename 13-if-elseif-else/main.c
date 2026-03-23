#include <stdio.h>

int main()
{
    int not;

    printf("Lutfen sinav notunuzu girin (0-100): ");
    scanf("%d", &not);

    // 1. Durum: Not 90 ve uzeri mi?
    if (not >= 90) {
        printf("Harika! Notunuz: AA\n");
    }
    // 2. Durum: Ýlk durum yanlýssa, not 70 ve uzeri mi?
    else if (not >= 70) {
        printf("Guzel! Notunuz: BB\n");
    }
    // 3. Durum: Usttekilerin hepsi yanlýssa, not 50 ve uzeri mi?
    else if (not >= 50) {
        printf("Gectin! Notunuz: CC\n");
    }
    // 4. Durum: Yukarýdaki hicbir kosul saglanmazsa (Son care)
    else {
        printf("Maalesef kaldiniz. Notunuz: FF\n");
    }

    return 0;
}

