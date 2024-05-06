#include <stdio.h>
#define SIZE 100

//dogrusal arama kucuk dizilerde etkili calisir , buyuk diziler icin ikili arama yap..

//Dizilerde Arama : Dogrusal ve Ikili Arama **
//fonksiyon tanimlamasi
size_t linearSearch(const int array[], int key, size_t size);

int main(void)
{
    int a[SIZE]; //a dizisinin tanimlanmasi
    size_t x; //a dizisindeki 0-99 eleman icin dongu sayacinin tanimlanmasi
    int search_key; //a dizisinde aranacak anahtar
    size_t element; //anahtarin konumunu veya -1 tutacak olan degisken

    //veri uretme
    for(x=0;x< SIZE ;x++){
        a[x] = 2*x;
    }
    puts("Tamsayi arama anahtari giriniz: ");
    scanf("%d",&search_key);

    //a dizisinde anahtar aramasi
    element =linearSearch(a ,search_key ,SIZE);

    //sonuclarin goruntulenmesi
    if(element != -1){
        printf("Bulunan deger: %d\n",element);
    }
    else{
        puts("Element bulunamadi ..");
    }
}

//anahtar ile her elemanin dogru konum bulunana kadar veya dizi sonuna kadar devam
//etmesi ; eleman bulundu ise konumu bulunmadi ise -1 dondurulmesi

size_t linearSearch(const int array[] ,int key ,size_t size){

    size_t n;  //sayac

    //dizi icinde dongu ile dolasilmasi
    for(n= 0; n < size;n++){

        if(array[n] == key){
            return n; //konumun dondurulmesi
        }
    }
    return -1; //anahtar bulunamamasi
}//linearSearch fonks. sonu
