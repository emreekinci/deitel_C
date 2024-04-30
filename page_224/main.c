#include <stdio.h>
#define CEVAP_B 40
#define FREKANS_B 11

//Guzel bir program bunu dinamik yazmaya calis mesela puan aralıgı serbest olsun maks degeri bul frekans boyutu maks degere ulas

//cevaplar 1-10 arasinda olmalidir
int main(void)
{
    size_t cevap; //40 cevap icin dongu sayaci
    size_t puan;  //1-10 arasi frekans icin

    //frekans sayaclarina 0 atanmasi
    int frekans[FREKANS_B] = {0};
    //sonuclarin cevap dizisine aktarilmasi
    int cevaplar[CEVAP_B]={1,1,1,1,2,3,4,5,4,3,8,8,8,7,7,9,9,9,9,9,0,0,0,0,0,
        1,2,2,2,1,1,1,5,5,5,6,6,6,6,6};
    //her cevap icin cevap dizisindeli elemanin degerinin secilmesi ve bu degerin
    //frekans dizisinde indis olarak eleman artirilmasi icin kullanilmasi
    for(cevap =0 ;cevap<CEVAP_B ;cevap++){
        ++frekans[cevaplar[cevap]];
    }
    //sonuclarin goruntulenmesi
    printf("%s%17s\n","Oylama","Frekans");

    //frekanslarin cizelge seklinde bastirilmasi
    for(puan=1;puan<FREKANS_B;puan++){
        printf("%6d%17d\n",puan,frekans[puan]);
    }
}
