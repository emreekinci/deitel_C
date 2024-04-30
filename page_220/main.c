#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10  //ONİSLEMCİ KOMUTU


//sonra duzelt bunu
int toplam_dizi(int *n);

int main(void)
{
    //n listesine baslangic degeri verilmesi
    int n[BOYUT] = {32,99,45,33,55,19,22,33,44,93};
    size_t i;
    int x;

    printf("%s%13s\n","Eleman","Deger");

    for(i=0;i<BOYUT;++i){
        printf("%7u%13d\n",i,n[i]);
    }
    x = toplam_dizi(&n);
    printf("Dizideki degerlerimin toplami: %d",x);
}
/*
toplam_dizi(int *n){
    int topla=0;

    while(*n != \0){
        topla+=n;
        *n = *(n+1);
    }
    return n;
}*/
