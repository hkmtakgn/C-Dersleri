#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilkSayi = 8;
    float ikinciSayi = 3.313;
    double ucuncuSayi = 313.33;
    char ilkKarakter = 'H';



//    printf("intSayi degiskeninin bellekteki boyutu %d bit kadardir.\n",sizeof(ilkSayi));

/*    printf("ikinciSayi degiskeninin bellekteki boyutu %d bit kadardir.\n",sizeof(ikinciSayi));
    printf("ucuncuSayi degiskeninin bellekteki boyutu %d bytes kadardir.\n",sizeof(ucuncuSayi));
    printf("ilkKarakter degiskeninin bellekteki boyutu %d bit kadardir.\n",sizeof(ilkKarakter));
*/

    printf("intSayi(int) degiskeninin bellekteki boyutu %d bit kadardir.\n",sizeof(int));
    printf("ikinciSayi degiskeninin bellekteki boyutu %d bit kadardir.\n",sizeof(float));
    printf("ucuncuSayi degiskeninin bellekteki boyutu %d bytes kadardir.\n",sizeof(double));
    printf("ilkKarakter degiskeninin bellekteki boyutu %d bit kadardir.\n",sizeof(char));


    return 0;
}
