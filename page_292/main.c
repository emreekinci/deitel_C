#include <stdio.h>
#define SIZE 10

void bubbleSort( int * const array , size_t size ); // size da const türünden **


int main (void)
{
    // a dizisini kullanima hazirla
    int a[SIZE] = {5,9,6,7,8,1,2,4,3,10};

    size_t s; //sayac

    puts("Data items in original orders ");

    //a dizisi boyunca dongu olustur
    for(s=0; s<SIZE; s++){
    printf("%4d",a[s]);
    }
    /*s=0;
    while(a[s] != '\0' ){
        printf("%4d",a[s]);
        s++;
    }*/
    bubbleSort(a, SIZE); //diziyi sirala

    puts("\nData items in ascending order..");

    // a dizisi boyunca dongu olustur
    for(s=0 ;s<SIZE; s++){
    printf("%4d",a[s]);
    }
    puts("");
}

// kabarcik siralama algoritmasini kullanarak bir tamsayi dizisini siralama
void bubbleSort( int * const array, size_t size){ // * const array sadece deger degisebilir adresi degisemez, *const array deger de adres te degisemez
    void swap( int *element1Ptr, int *element2Ptr );// fonk bildirimi
    unsigned int pass; //gecis sayisi
    size_t j; //karsilastirma sayisi

    //gecislerde kontrol etme dongusu
    for (pass = 0; pass < size; pass++){
        //her gecis boyunca karsilastirmalari kontrol etme
        for( j=0 ; j<size - 1 ; j++){ // 10 eleman 9 karsilastirma yeterli
            //siralama duzenin disinda ise ardisik elemanlarin yerini degistir
            if( array[j] > array[j+1]){
                swap( &array[j], &array[j+1]);// adreslerini swap e attiik
            }
        }
    }
}
//element1Ptr ve element2Ptr nin isaret ettikleri bellek lokasyonundaki degerleri degistirir
void swap ( int *element1Ptr, int *element2Ptr){// &array[j],&array[j+1]
    int hold= *element1Ptr;
    *element1Ptr= *element2Ptr;
    *element2Ptr =hold;
}

