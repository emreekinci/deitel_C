#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 7


int main(void)
{
    size_t yuz;
    unsigned int atis; // atis sayaci 1-6 000 000
    unsigned int frekans[BOYUT] = {0}; //sayimlari sifirlamak icin

    srand(time(NULL)); //rastgele sayi uretecim

    //6.000.000 atis yapilmasi
    for(atis=1;atis <= 6000000;atis++){
        yuz = 1 + rand()%6 ;
        ++frekans[yuz];
    }

    printf("%s%17s\n","Face","Frequency");
    //1-6 freksans araigindaki elemanlari cizelge seklinde yazdirmak
    for(yuz=1;yuz<BOYUT;++yuz){ //boyut -1 kere doner
        printf("%4d%17d\n",yuz,frekans[yuz]);
    }


}
