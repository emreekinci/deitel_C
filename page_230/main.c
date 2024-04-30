#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

//statik dizi ornegi : eger statik dizilere baslangic degeri atamazsak otomatik (default) : 0 olurlar..

int main(void)
{
    puts("Her fonksiyona yapilan ilk cagri: ");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nHer fonksiyona yapilan ikinci cagri: ");
    staticArrayInit();
    automaticArrayInit();
}
//statik yerel diziyi gosteren fonksiyon
void staticArrayInit(void){
    //ilk fonksiyon cagrisinda elemanlara 0 atanmasi
    static int array1[3];
    unsigned int i; // unsigned int sanirim

    puts("\nDegerlerin staticArrayInit fonksiyonuna girisi: ");

    //array1 icerik ciktisi
    for(i=0 ; i<=2 ;i++){
        printf("array1[%u] = %d ",i , array1[i]);
    }
    puts("\nDegerlerin staticArrayInit fonksiyonuna cikisi: ");

    //array1 iceriginin degistirilmesi ve ciktisi
    for(i=0 ; i<=2 ; i++){
        printf("array1[%u] = %d ",i , array1[i]+=5);
    }
}

//otomatik yerel diziyi gosteren fonksiyon
void automaticArrayInit(void){
    int array2[3] = {1,2,3};
    unsigned int i; //sayac

    puts("\n\nDegerlerin automaticArrayInit fonksiyonuna girisi: ");

    //array2 icerik ciktisi
    for(i=0;i<=2;i++){
        printf("array2[%u] = %d ",i , array2[i]);
    }
    puts("\nDegerşerlerin automaticArrayInit fonksiyonundan cikisi: ");
    //array2 iceriginin degistirilmesi ve ciktisi
    for(i=0;i<=2;i++){
        printf("array2[%u] = %d ",i , array2[i]+=5);
    }
}
