#include <stdio.h>
#define BOYUT 5

//fonksiyon tanimlamasi
void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void)
{
    int a[BOYUT] = {0,1,2,3,4}; // a dizisine baslangic degeri atama
    size_t i; //sayac

    puts("Tum dizinin referans ile gecirilmesinin etkisi :\nOrjinal"
         " dizinin degerleri:");
    //orjinal dizinin ciktisi
    for(i=0;i<BOYUT;i++){
        printf("%3d",a[i]);
    }
    puts( "" );

    //modifyElement fonksiyonuna dizinin elemaninin gecirilmesi
    modifyArray( a, BOYUT);



    puts("Degistirilen dizinin degerleri:");

    //degistirilen dizinin cikktisi
    for(i=0;i<BOYUT;++i){
        printf("%3d",a[i]);
    }
    //a[3] icindeki degerlerin ciktisi
    printf("\n\n\n Deger ile dizi elemani gecirmenin etkisi"
           "\n\n a[3] elemaninin degeri %d\n",a[3]);

    modifyElement(a[3]); //dizi elemani a[3] un degerle gecirilmesi
    printf(" a[3] elemaninin degeri %d\n",a[3]);



}
//modifyArray fonksiyonunda "b" nin , orjinal dizideki "a" nin yerini gostermesi
    void modifyArray( int b[], size_t size){
        size_t j;

        //her elemani 2 ile carpma
        for(j=0 ; j<size ; ++j){
            b[j]*=2; // orjinal diziyi gercek olaral degistirme
        }
    }

    //modifyElement fonksiyonunda "e" nin main fonksiyonundan gelen a[3] dizi elemaninin kopyasi olmasi
    void modifyElement( int e ){
        //parametreyi 2 ile carpma
        printf(" modifyElement degeri: %d\n",e*=2);
    }



