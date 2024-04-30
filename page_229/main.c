#include <stdio.h>
#include <stdlib.h>
#define BOYUT 20

// guzel bir ornek kisitli cikti ile kullanici girisi sagladik

int main(void)
{
    char string1[BOYUT];//20 elemanli str dizim
    char string2[] = "string literal"; //15 karakter ayrilmasi
    size_t i; //sayac icin

    //kullanici tarafindan girilen string diziyi string 1 dizisine okuma
    printf("%s","Karakter dizini giriniz (en fazla 19 karakter): ");
    scanf("%19s",&string1); //19 karakterden fazla girdinin saklanmamasi

    //karakter dizininin gosterilmesi
    printf("string1 : %s\nstring2 : %s\n"
           "string1 karakterler arasi bosluk ile gosterilmesi:\n",string1,string2);

    //null karakter gelene kadar ekrana yazdirilmasi
    for(i=0; i<BOYUT && string1[i] != '\0';i++){
        printf("%c ", string1[i]);
    }
    puts("");

}
