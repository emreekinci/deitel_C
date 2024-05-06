#include <stdio.h>
#define SIZE 10

//KABARCIK SIRALAMASI: HER IC DONGUDE 1 ADIM DAHA AZ KARSILASTIRMA YAPILIR

int main(void)
{
    // a dizisine baslangic degeri atama
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
    int pass; // dolasma sayaci
    size_t i; // karsilastirma sayaci
    int hold; // yer deg sirasinda kullanilacak gecici degisken

    puts("Orjinal siradaki veriler: ");

    //orjinal dizinin yazdirilmasi
    for(i=0 ; i<SIZE ; i++){ //SIZE-1
        printf("%4d ",a[i]);
    }

    //kabarcik siralama
    //dolasmayi kontrol eden dongu
    for(pass=1; pass < SIZE;++pass ){ // ic donguye(her gırıste -1 adım) kac defa girilecegi

        //her dolasmadaki karsilastirma sayisini kontrol eden dongu
        for(i=0; i<SIZE - 1;i++){  // n. eleman icin n-1 dolasma
        //komsu elemanlari karsilastirma
        //ilk eleman > ikinci elemansa yer degistirme
            if(a[i] > a[i+1]){
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }

    puts("\n\nElemanlarin artan sirada siralanmasi: ");

    //sirali dizinin ciktisi
    /*i=0;
    while(a[i] != '\0'){ //Sikintili dongu sadsadasadad
        printf("%4d ",a[i]);
        i++;
    }*/

    for(i=0 ; i<SIZE ; ++i){
        printf("%4d ",a[i]);
    }
}
