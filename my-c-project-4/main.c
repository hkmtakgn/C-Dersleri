#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    const char my_name = 'H';
    // my_name = 'hkmt'; bu satýr çalýþtýðýnda hata verir.
    // error: assignment of read-only variable 'my_name'|  << hata_mesajý
    // float PI = 14; bu satýr çalýþýrsa hata verir.
    printf("%c \n",my_name);
    printf("%f",PI);
    return 0;
}
