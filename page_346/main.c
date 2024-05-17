// fgets ve putchar fonksiyonlari kullanimi
#include <stdio.h>
#define SIZE 80

void reverse( const char * const sPtr); //fonk tannimi

int main(void)
{
    char sentence[ SIZE];
     puts("Enter a linw of text:" );

     //bir satir metin okumak icin fgets kullanimi
     fgets( sentence, SIZE, stdin );

     puts("\nThe line printed backward is:" );
     reverse( sentence );
}

void reverse( const char * const sPtr ){
    // karakter dizini sonu ise
    if( '\0' == sPtr[0] ){
        return; // geri don
    }
    else{ // karakter dizi sonu degilse
        reverse( &sPtr[ 1 ] );
        putchar( sPtr[ 0 ] );
    }
}
