//sirali dizide ikili arama
#include <stdio.h>
#define SIZE 15

//ANLAMASI BIRAZ ZOR DON BAK **********
//fonksiyon tanimlamalari
size_t binarySearch(const int b[] ,int searchKey ,size_t low , size_t high);
void printHeader(void);
void printRow(const int b[] ,size_t low ,size_t mid ,size_t high);

int main(void)
{
    int a[SIZE]; // a dizisinin olusturulmasi
    size_t i; // a dizisindeki elemanlara baslangic degeri atayan sayac
    int key; // a dizisindeki degerin konumunu belirten degisken
    size_t result; //anahtarin konumu veya -1 tutan degisken

    //verilerin olustrulmasi
    for(i=0; i<SIZE; i++){
        a[i] = i * 2;
    }

    printf("%s","0-28 arasi rakam giriniz: ");
    scanf("%d",&key);

    printHeader();

    //a dizisinde anahtarin aranmasi
    result = binarySearch(a ,key , 0, SIZE -1);

    //sonuclarin goruntulenmesi
    if(result != -1){
        printf("\n%d degeri %d icinde bulunmustur\n", key, result);
    }
    else{
        printf("\n%d bulunamadi\n",key);
    }
}

//dizi icinde ikili aramanin gerceklestirilmesi
size_t binarySearch(const int b[] ,int searchKey ,size_t low ,size_t high){

    int middle; //variable dizinin orta elemanini tutan degisken

    //dusuk indisin  yuksek indisten buyuk olmasina kadar devam eden dongu
    while(  low <= high ){

        //aranacak altdizinin orta elemaninin tespit edilmesi
        middle = (low + high) / 2;

        //dongu sirasinda kullanilan altdizinin goruntulenmesi
        printRow(b ,low ,middle ,high);

        //orta elemanla anahtar uyusursa , orta elemanin dondurulmesii
        if( searchKey == b[middle]){
            return middle;
        }

        //anahtar orta elemandan kucukse ,yeni yuksek degerin atanmasi
        else if(searchKey < b[middle]){
            high = middle - 1; // dizi sonunda yuksegin aranmasi
        }
        //anahtar orta elemandan kucukse ,yeni yuksek degerin atanmasi
        else{
            low = middle + 1; // dizi sonunda yuksegin aranmasi
        }
    } //while sonu
    return -1; //anahtarin bulunamamasi
}

// cikkti icin baslik yazdirilmasi
void printHeader(void){
    unsigned int i; //sayac

    puts("\nIndisler: ");

    //sutun basinin ciktisi
    for(i=0 ;i < SIZE ;i++){
        printf("%3u ",i);
    }

    puts( "" ); //ciktida yeni satir yazdirilmasi

    // - karakterlerin yazdirilmasi
    for(i=1 ;i <= 4 * SIZE ; i++){
        printf("%s", "-");
    }

    puts( "" ); //ciktida yeni satir yazdirilmasi
} //printHeader sonu

void printRow(const int b[] ,size_t low ,size_t mid ,size_t high){

    size_t i;  // b dizisinde dolasmak icin sayac

    //dizi icin olusturulan dongu
    for(i=0 ;i < SIZE ;i++){

        //altdizi kapsami disinda kalan bosluklarin yazdirilmasi
        if(i < low || i > high){
            printf("%s","    ");
        }
        else if(i == mid){ // orta elemanin goruntulenmesi
            printf("%3d*",b[i]); // orta elemanin isaretlenmesi
        }
        else{//altdizideki diger elemanlarin yazdirilmasi
            printf("%3d ",b[i]);
        }
    }

    puts( "" ); //yeni satirin yazdirilmasi

}
