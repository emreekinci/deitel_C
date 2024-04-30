#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
int main(void)
{
    // n dizisi icin baslangic degeri atama listesi kullanimi
    int n[BOYUT] = { 19, 3, 15, 22, 33 , 12, 15, 33, 19, 19};
    size_t i; // dizi elemanlari icin dis dongu sayaci
    int j; //her histogram sutunundaki yildizlari sayan ic for d sayaci

    printf("%s%13s%17s\n","Eleman","Deger","Histogram");

    // n dizisindeki her eleman icin histogram grafigine sutun yazdirma
    for(i=0;i<BOYUT;++i){
        printf("%7u%11d  ",i,n[i]);
        for(j=1;j<=n[i];++j){
            printf("%c",'*');
        }
        puts("");
    }



}
